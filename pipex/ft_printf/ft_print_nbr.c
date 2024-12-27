/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:30:51 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/23 19:12:05 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	long	num;
	int		size;

	num = n;
	size = 0;
	if (num < 0)
	{
		size += ft_print_char('-');
		num = -num;
	}
	if (num >= 10)
	{
		size += ft_print_nbr(num / 10);
	}
	size += ft_print_char(num % 10 + '0');
	return (size);
}
