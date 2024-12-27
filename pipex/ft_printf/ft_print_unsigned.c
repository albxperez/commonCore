/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:35:42 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/23 19:17:21 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nbr)
{
	int	size;

	size = 0;
	if (nbr >= 10)
		size += ft_print_unsigned(nbr / 10);
	size += ft_print_char((nbr % 10) + '0');
	return (size);
}
