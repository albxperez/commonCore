/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:08:47 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/02 19:40:25 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!(c >= 'A' && c <= 'Z')
		&& !(c >= 'a' && c <= 'z')
		&& !(c >= '0' && c <= '9'))
	{
		return (0);
	}
	else
		return (1);
}
/*
int	main(void)
{
	unsigned char c = 'c';
	printf("%d", ft_isalnum(c));
	printf("\n%d", isalnum(c));
	return 0;
}*/
