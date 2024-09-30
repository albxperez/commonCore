/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:34:31 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/30 12:11:45 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr = (unsigned char*) s;

	size_t i;

	i = 0;
	while(i != '\0')
	{
		while(i <= n)
		{
			ptr[i] =  '0';
			i++;
		}
	}
}
int	main(void)
{
	char str[15];
	ft_bzero(str,14*sizeof(char));
	printf("%s",str);
	bzero(str,14*sizeof(char));
	printf("\n%s", str);
	return 0;
}
