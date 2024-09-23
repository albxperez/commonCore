/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:23:52 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/18 13:30:23 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return 0;
	else 
		return 1;
}

int	main(void)
{
	unsigned char c = '7';
	printf("%d", ft_isdigit(c));
	printf("\n%d", isdigit(c));
	return 0;
}
