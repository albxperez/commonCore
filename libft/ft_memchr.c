/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:14:13 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/02 19:45:51 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *) str;
	while (i < n)
	{
		if (ptr[i] == c)
			return (ptr - i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char str[10] = "hola mundo";
	char *result = ft_memchr(str, 'u', 10);
	printf("%li", str - result);
	return 0;
}*/
