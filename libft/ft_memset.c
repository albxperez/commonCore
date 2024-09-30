/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:28:08 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/30 12:10:54 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char*) s;

	size_t i;

	i = 0;
	while(i != '\0')
	{
		while(i < n)
		{
			ptr[i] = (unsigned char) c;
			i++;
		}
	}

	return ptr;
}

int	main(void)
{
	char str[15];
	//printf("%p", ft_memset(str,'A', sizeof(char)));
	ft_memset(str, 'A', 14*sizeof(char));
	printf("%s",str);
	memset(str, 'A',14*sizeof(char));
	printf("\n%s", str);
	return 0;
}
