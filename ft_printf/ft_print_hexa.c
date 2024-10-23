/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:22:57 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/23 18:38:57 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long long nbr, int cap)
{
	int		size;
	char	hexa_min;
	char	hexa_mayus;

	size = 0;
	hexa_min = "0123456789abcdef"[nbr % 16];
	hexa_mayus = "0123456789ABCDEF"[nbr % 16];
	if (nbr >= 16)
		size += ft_print_hexa(nbr / 16, cap);
	if (cap == 0)
		size += ft_print_char(hexa_min);
	else
		size += ft_print_char(hexa_mayus);
	return (size);
}
