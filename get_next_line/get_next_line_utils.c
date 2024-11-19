/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:04:18 by aperez-r          #+#    #+#             */
/*   Updated: 2024/11/19 18:28:15 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	lenght;
	size_t	i;

	if (s == NULL)
		return (NULL);
	lenght = ft_strlen(s);
	str = malloc((lenght + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new_string;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_string = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while(s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	while(s2[i] != '\0')
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}
	new_string[i] = '\0';
	return (new_string);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*s2;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (str_len < start)
	{
		s2 = malloc(1 * sizeof(char));
		if (s2 == NULL)
			return (NULL);
		s2[0] = '\0';
		return (s2);
	}
	if (len > str_len - start)
		len = str_len - start;
	s2 = malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
