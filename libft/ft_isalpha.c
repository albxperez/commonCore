/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:38:15 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/30 15:54:35 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_isalpha(int c)
{
	if (!(c >= 'A' && c <= 'Z')
			&& !(c >= 'a' && c <= 'z'))
		{
			return 0;
		}
	else
		return 1;
}

int	main(void)
{
	unsigned char c = 'A';
	printf("%d", ft_isalpha(c));
	printf("\n%d", isalpha(c));
	return (0);
}
