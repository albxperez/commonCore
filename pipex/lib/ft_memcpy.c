/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:13:39 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/14 12:42:53 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	unsigned const char		*s;
	size_t					i;

	d = (unsigned char *) dest;
	s = (unsigned const char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*int main(void)
{
    const char src[10] = "libro";
    char *dest =(char *)(src + 2);
    ft_memcpy(dest, src, 5);
    printf("%s", dest);
    //printf("\n%s",src);
    memcpy(dest, src, 5);
    printf("\n%s", dest);
    //printf("\n%s", src);
    return 0;
}*/
