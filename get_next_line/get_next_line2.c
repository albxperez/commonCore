/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:17:44 by aperez-r          #+#    #+#             */
/*   Updated: 2024/11/20 16:39:44 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char     *ft_error(char *str)
{
        if(str)
        {
                free(str);
                str = NULL;
        }
        return (NULL);
}

static char	*fill_line_buffer(int fd, char *stash)
{
	ssize_t bytes_read;
	char	*buffer;
	
	if(!stash)	
		stash = ft_strdup("");
	buffer =(char *)malloc(BUFFER_SIZE + 1 * sizeof(char));
	if(!buffer)
		return (ft_error(stash));
	printf("Iniciando fill_line_buffer, stash: '%s'\n", stash);
	while(stash && !ft_strchr(stash, '\n'))
	{	
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		printf("Leidos %zd bytes, buffer; '%s' \n",bytes_read, buffer);
		if(bytes_read < 0)
			return (ft_error(stash), ft_error(buffer));
		if(bytes_read == 0)
		{
			if(stash[0] == '\0')
				return(ft_error(buffer), stash);
			break ;
		}
		buffer[bytes_read] = '\0';
		stash = ft_strjoin(stash, buffer);
		printf("Nuevo stash despues de strjoin: '%s'\n", stash);
		if(!stash)
			return(ft_error(stash));
	}
	printf("Finalizado fill_line_buffer");
	return (ft_error(buffer), stash);
}

static char	*set_line(char **stash)
{
	char	*newline;
	char	*line;
	char	*temp;
	
	if(!stash || !*stash)
		return (NULL);
	printf("Iniciando set_line stash: '%s'\n", *stash);
	newline = ft_strchr(*stash, '\n');
	if(newline)
	{
		line = ft_substr(*stash, 0, newline - *stash + 1);
		temp = ft_strdup(newline + 1);
		free(*stash);
		*stash = temp;
		printf("Línea extraida: '%s', nuevo stash:'%s'\n", line, *stash);
		if(!line)
			return (ft_error(line));
	}
	else
	{
		line = ft_strdup(*stash);
		free(*stash);
		*stash = NULL;
		printf("Línea final sin salto de linea:'%s'\n",line);
	}
	return (line);
}

char    *get_next_line(int fd)
{
        static char    *stash;
        char    *line;

        if(fd < 0 || BUFFER_SIZE <= 0)
                return (NULL);
	printf("Iniciando get_next_line, stash: '%s'\n", stash);
        stash = fill_line_buffer(fd, stash);
	if(!stash)
		return (NULL);
        line = set_line(&stash);
	if(line && line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	 printf("Línea devuelta por get_next_line: '%s'\n", line);
        return (line);
}
