/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:52 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/22 18:56:30 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	i;
	int	size;

	i = 0;
	size = 0;
	va_start(args, str);
	while(str[i] != '\0')
	{
		if(str[i] == '%')
		{
			size += ft_format(str[i + 1]);
			i++;
		}
		else
			size = ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (size);
}

static int	ft_format(va_list args, const char letter)
{
	int	size;

	size = 0;
	if(letter == 'c')
		size += ft_print_char(va_arg(args, int));
	if(letter == 'd' || letter == 'i')
		size += ft_print_nbr(va_arg(args, int));
	if(letter == 's')
		size += ft_print_str(va_arg(args, char *));

}
