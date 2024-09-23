/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:08:47 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/18 16:33:52 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	isalnum(int c)
{
	if (!(c >= 'A' && c <= 'Z')
			&& !(c >= 'a' && c <= 'z')
			&& !(c >= '0' && c <= '9'))
		{
			return (1);
		}
	else
		return (0);
}

int	main(void)
{
	unsigned char c = 'c';
	printf("%d", isalnum(c));
	return 0;
}
