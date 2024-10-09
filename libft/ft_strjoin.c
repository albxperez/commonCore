/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:48:24 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/09 18:09:04 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_string;
	
	if(s1 == NULL || s2 == NULL)
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

/*int	main(void)
{
	const char *str1 = "hola ";
	const char *str2 = "mundo";
	printf("%s",ft_strjoin(str1, str2));
	return 0;
}*/
