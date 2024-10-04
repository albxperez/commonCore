/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:49:13 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/04 09:37:37 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*s2;
	size_t		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if(str_len < start)
	{
		s2 = malloc(1 * sizeof(char));
		if(s2 == NULL)
			return (NULL);
		s2[0] = '\0';
		return (s2);
	}
	if(len > str_len - start)
		len = str_len - start;
	s2 = malloc((len + 1) * sizeof(char));
	i = 0;
    	while (i < len && s[start + i] != '\0')
    	{
        	s2[i] = s[start + i];
        	i++;
    	}
	s2[i] = '\0';
	
	return (s2);
}

/*int	main(void)
{
	char const string[] = "bocata de jamon";
        unsigned int start = 10;
        size_t lenght = 6;
        printf("%s",ft_substr(string, start, lenght));
        return 0;
}*/
