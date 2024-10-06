/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:54:29 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/06 21:37:13 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_negative(int *n)
{
	if(*n < 0)
	{
		*n = -*n;
		return 1;
	}
	return 0;
}

size_t	ft_num_digits(int nbr)
{
	size_t numDigits;

	numDigits = 0;
	if(nbr == 0)
		return 1;
	while(nbr != 0)
        {
                nbr = nbr / 10;
                numDigits++;
        }
	return numDigits;
}

char	*ft_is_zero(void)
{
	char *str;
	str = (char *)malloc(2 * sizeof(char));
	if (str == NULL)
		return NULL;
	str[0] = '0';
	str[1] = '\0';
	return str;
}
char	*ft_itoa(int n)
{
	size_t	numDigits;
	char	*str;
	unsigned int	nbr;
	int	isNegative;
	
	nbr = n;
	numDigits = ft_num_digits(nbr);
	isNegative = ft_is_negative(&n);
	if (n == 0)
		return ft_is_zero();
	if (n == -2147483648)
		return strdup("-2147483648");
	if(isNegative)
		numDigits++;//para el signo
	str = (char *)malloc((numDigits + 1) * sizeof(char));
	if(str == NULL)
		return (NULL);
	str[numDigits] = '\0';
	while (n != 0)
	{
		str[--numDigits] = (n % 10) + '0';
       		n = n / 10;
	}
	if (isNegative)
        	str[--numDigits] = '-';
	return str;
}

/*int	main(void)
{
	int number = -12345;
	char* result = ft_itoa(number);
    
    if (result != NULL)
        printf("El número %d como cadena es: %s\n", number, result);
    return 0;
}*/
