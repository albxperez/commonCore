/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:54:29 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/14 19:18:00 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_negative(int *n)
{
	if (*n < 0)
	{
		*n = -*n;
		return (1);
	}
	return (0);
}

static size_t	ft_num_digits(int nbr)
{
	size_t	num_digits;

	num_digits = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		num_digits++;
	}
	return (num_digits);
}

static void	ft_fill_num(char *str, unsigned int nbr, int num_digits, int n)
{
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	while (num_digits > 0)
	{
		str[--num_digits] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				num_digits;
	char			*str;
	int				is_negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negative = ft_is_negative(&n);
	nbr = n;
	num_digits = ft_num_digits(nbr);
	str = (char *)malloc((num_digits + is_negative + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[num_digits + is_negative] = '\0';
	ft_fill_num(str + is_negative, nbr, num_digits, n);
	if (is_negative)
		str[0] = '-';
	return (str);
}

/*int	main(void)
{
	int number = (-1234);
	char* result = ft_itoa(number);
    
    if (result != NULL)
        printf("El número %d como cadena es: %s\n", number, result);
    return 0;
}
*/
