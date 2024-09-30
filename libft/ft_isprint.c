/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:49:46 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/23 13:23:04 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if(c > 31 && c < 127)
		return 1;
	else 
		return 0;
}

int	main(void)
{
	unsigned char c ='A' ;
	printf("%d", ft_isprint(c));
	printf("\n%d", isprint(c));
	return 0;
}
