/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:24:23 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/19 18:23:59 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (!(c >= 'A' && c <= 'Z'))
		{
			c = c - 32;
			return (c);
		}
	else 
		return (c);
}

int	main(void)
{
	unsigned char c = 'A';
	printf("%c", ft_toupper(c));
	return 0;
}
