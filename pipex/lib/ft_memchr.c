/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:14:13 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/06 15:40:27 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *) str;
	while (i < n)
	{
		if (ptr[i] == (char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char str[7] = "bonjour";
	char *result = ft_memchr(str, 'o', 7);
	printf("%c\n", *result);
	return 0;
}*/
