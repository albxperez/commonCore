/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:17:44 by aperez-r          #+#    #+#             */
/*   Updated: 2024/11/21 15:51:54 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_free(char *str)
{
	if (str)
	{
		free(str);
		str = NULL;
	}
	return (NULL);
}

static char	*fill_line_buffer(int fd, char *stash)
{
	ssize_t	bytes_read;
	char	*buffer;

	if (!stash)
		stash = ft_strdup("");
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (ft_free(stash));
	while (stash && !ft_strchr(stash, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (ft_free(stash), ft_free(buffer));
		if (bytes_read == 0)
		{
			if (stash[0] == '\0')
				return (ft_free(buffer), stash);
			break ;
		}
		buffer[bytes_read] = '\0';
		stash = ft_strjoin(stash, buffer);
		if (!stash)
			return (ft_free(stash));
	}
	return (ft_free(buffer), stash);
}

static char	*set_line(char **stash)
{
	char	*newline;
	char	*line;
	char	*temp;

	if (!stash || !*stash)
		return (NULL);
	newline = ft_strchr(*stash, '\n');
	if (newline)
	{
		line = ft_substr(*stash, 0, newline - *stash + 1);
		temp = ft_strdup(newline + 1);
		free(*stash);
		*stash = temp;
		if (!line)
			return (ft_free(line));
	}
	else
	{
		line = ft_strdup(*stash);
		free(*stash);
		*stash = NULL;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = fill_line_buffer(fd, stash);
	if (!stash)
		return (NULL);
	line = set_line(&stash);
	if (line && line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	return (line);
}
