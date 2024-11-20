/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:17:44 by aperez-r          #+#    #+#             */
/*   Updated: 2024/11/20 19:05:13 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_error(char *str)
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
	char	*temp;

	if (!stash)//si estash es NULL, se incilializa como cadena vacia
		stash = ft_strdup("");
	buffer = (char *)malloc(BUFFER_SIZE + 1 * sizeof(char));
	if (!buffer)
		return (ft_error(stash));
	while (stash && !ft_strchr(stash, '\n'))//si stash no es NULL y no hay salto de línea en stash
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (ft_error(stash), ft_error(buffer));
		if (bytes_read == 0)
		{
			if (stash[0] == '\0')//si stash está vacío
				return (ft_error(buffer), stash);
			break ;
		}
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(stash, buffer);
		free(stash);
		stash = temp;
		if (!stash)
			return (ft_error(stash));
	}
	return (ft_error(buffer), stash);
}

static char	*set_line(char **stash)//doble puntero para editar el stash de gnl
{
	char	*newline;
	char	*line;
	char	*temp;

	if (!stash || !*stash)
		return (NULL);
	newline = ft_strchr(*stash, '\n');
	if (newline)//si newline existe
	{
		line = ft_substr(*stash, 0, newline - *stash + 1);
		temp = ft_strdup(newline + 1);
		free(*stash);
		*stash = temp;
		if (!line)
			return (ft_error(line));
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
