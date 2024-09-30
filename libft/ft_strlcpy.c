/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:29:39 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/30 16:01:59 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[i] != '\0')
	{
		src_len++;
		i++;
	}
	i = 0;
	while (i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (src_len);
}	
int	main(void)
{
	const char src[] = "hola mundo";
	char dest[6];
	printf("%zu",ft_strlcpy(dest, src, sizeof(dest)));
	printf("\n%s", dest);
	return 0;
}
