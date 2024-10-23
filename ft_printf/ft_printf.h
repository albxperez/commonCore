/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:35:58 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/23 19:19:20 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_print_nbr(int n);
int	ft_print_str(char *s);
int	ft_print_ptr(void *p);
int	ft_print_hexa(unsigned long long nbr, int cap);
int	ft_print_unsigned(unsigned int nbr);
#endif
