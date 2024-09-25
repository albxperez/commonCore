/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:08:05 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/25 16:50:17 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char*) dest;
	unsigned const char *s = (unsigned const char*) src;
	unsigned char temp[10];
	int i;

	i = 0;
	while(i < n)
	{
		temp[i] = s[i];
		d[i] = temp[i];
		i++;
	}
	return d;
}

int	main(void)
{
	const char src[10] = "hola mundo";
	char dest[10];
	ft_memmove(dest, src, 5);
	printf("%s",dest);
	printf("\n%s", src);
	return 0;
}
