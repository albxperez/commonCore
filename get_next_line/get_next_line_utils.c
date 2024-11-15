/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:04:18 by aperez-r          #+#    #+#             */
/*   Updated: 2024/11/15 19:09:18 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

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
	str = malloc(lenght + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_string;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_string = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	ft_strlcpy(new_string, s1, (s1_len + 1));
	ft_strlcat(new_string, s2, (s1_len + s2_len + 1));
	return (new_string);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*s2;

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
	ft_strlcpy(s2, s + start, len + 1);
	return (s2);
}
