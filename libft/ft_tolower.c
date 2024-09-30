/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:24:21 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/19 18:27:04 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (!(c >= 'a' && c <= 'z'))
		{
			c = c + 32;
			return (c);
		}
	else 
		return (c);
}

int	main(void)
{
	unsigned char c = 'D';
	printf("%c", ft_tolower(c));
	return 0;
}
