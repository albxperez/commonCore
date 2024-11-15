/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:17:44 by aperez-r          #+#    #+#             */
/*   Updated: 2024/11/15 19:26:02 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*stash;
	char	*buffer;
	char	*line;

	
	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	stash = fill_line_buffer(fd, stash, buffer);
	free(buffer);
	line = set_line(stash);
	return (line);
}

char	*fill_line_buffer(int fd, char *stash, char *buffer)
{
	ssize_t bytes_read;
	
	bytes_read = 1;
	if(!stash)	
		stash = ft_strdup(buffer);
	if(fd < 0)
		return (NULL);
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	while(bytes_read > 0)
	{	
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if(bytes_read == -1)
			return (NULL);
		if(bytes_read == 0)
			break ;
	}
	buffer[bytes_read] = '\0';
	stash = ft_strjoin(stash, buffer);
	return (stash);
}

char	*set_line(char *line_buffer)
{
	char	*newline;
	char	*line;

	newline = ft_strchr(line_buffer, '\n');
	if(newline)
		line = ft_substr(line_buffer, 0, newline - line_buffer + 1);
	else
	{
		line = ft_strdup(line_buffer);
		free(line_buffer);
	}
	return (line);
}
