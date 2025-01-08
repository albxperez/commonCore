/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:34:20 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/03 11:35:07 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (find[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (find[j] != '\0' && (i + j) < len
			&& str[i + j] == find[j])
			j++;
		if (find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char str1[] = "bocata de jamon y queso";
	const char str2[] = "jamon";
	char *result = ft_strnstr(str1, str2, sizeof(str1));
	printf("%s", result);
	return 0;
}*/
