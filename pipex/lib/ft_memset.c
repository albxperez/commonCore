/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:28:08 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/08 12:56:42 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	char str[6] = "abcdef";
	ft_memset(str, 'A', 3);
	printf("%s",str);
	memset(str, 'A',3);
	printf("\n%s", str);
	return 0;
}*/
