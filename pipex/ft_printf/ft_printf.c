/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:52 by aperez-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:56:57 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char letter)
{
	int	size;

	size = 0;
	if (letter == 'c')
		size += ft_print_char(va_arg(args, int));
	else if (letter == 's')
		size += ft_print_str(va_arg(args, char *));
	else if (letter == 'p')
		size += ft_print_ptr(va_arg(args, void *));
	else if (letter == 'd' || letter == 'i')
		size += ft_print_nbr(va_arg(args, int));
	else if (letter == 'u')
		size += ft_print_unsigned(va_arg(args, unsigned int));
	else if (letter == 'x')
		size += ft_print_hexa(va_arg(args, unsigned int), 0);
	else if (letter == 'X')
		size += ft_print_hexa(va_arg(args, unsigned int), 1);
	else if (letter == '%')
		size += ft_print_char('%');
	else
		size += ft_print_char(letter);
	return (size);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		size;

	i = 0;
	size = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			size += ft_format(args, str[i + 1]);
			i++;
		}
		else
			size += ft_print_char(str[i]);
		i++;
	}
	va_end (args);
	return (size);
}

/*int	main(void)
{
   char caracter = 'H';
   char *cadena = NULL;
   void *puntero = NULL;
   int entero = -2147483648;
   unsigned int sin_signo = 4294967295;
   int hexadecimal = 0xABCD;


    // Prueba de diferentes formatos de impresión
    ft_printf("Caracter: %c\n", caracter);
    ft_printf("Cadena: %s\n", cadena);
    ft_printf("Puntero: %p\n", puntero);
    ft_printf("Decimal: %d\n", entero);
    ft_printf("Entero: %i\n", entero);
    ft_printf("Sin signo: %u\n", sin_signo);
    ft_printf("Hexadecimal (minúsculas): %x\n", hexadecimal);
    ft_printf("Hexadecimal (mayúsculas): %X\n", hexadecimal);
    ft_printf("Símbolo del porcentaje: %%\n");

    return 0;

}*/
