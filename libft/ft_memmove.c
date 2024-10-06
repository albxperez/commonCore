/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:08:05 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/06 15:46:10 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	unsigned const char		*s;
	size_t					i;

	d = (unsigned char *) dest;
	s = (unsigned const char *) src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (d);
}

/*int	main(void)
{
	char str[] = "libro";
	ft_memmove(str + 3, str, 3);
	printf("%s", str);
	memmove(str + 3, str , 3);
	printf("\n%s", str);
	return 0;
}*/
