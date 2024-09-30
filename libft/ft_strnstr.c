/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:34:20 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/30 12:14:20 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if(needle[i] == '\0')
		return ((char *)haystack);
	while(haystack[i] != '\0')
	{
		j = 0;
		while(needle[j] != '\0' && (i + j) < len 
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return 0;
}

int	main(void)
{
	const char str1[] = "bocata de jamon y queso";
	const char str2[] = "jamon";
	char *result = ft_strnstr(str1, str2, sizeof(str1));
	printf("%s", result);
	return 0;
}
