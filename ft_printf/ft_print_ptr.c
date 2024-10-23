/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:32:15 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/23 19:16:03 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *p)
{
	int					size;
	unsigned long long	pointer;

	pointer = (unsigned long long)p;
	size = 0;
	if (!p)
	{
		size += ft_print_str("nil");
		return (size);
	}
	size += ft_print_str("0x");
	size += ft_print_hexa(pointer, 0);
	return (size);
}
