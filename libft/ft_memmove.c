/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:08:05 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/02 15:49:00 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	temp[n];
	size_t i;

	d = (unsigned char*) dest;
	s = (unsigned char*) src;
	i = 0;
	while(i < n)
	{
		temp[i] = s[i];
		d[i] = temp[i];
		i++;
	}
	return (d);
}

/*int	main(void)
{
	char *src = strdup("hola maravilloso mundo de mierda");
	char *dest = &src[5];
	ft_memmove(dest, src, 15);
	printf("ft_memmove: \n%s",dest);
	printf("\n%s\n", src);
	free(src);
	return (0);
}*/
