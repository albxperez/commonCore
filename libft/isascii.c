/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:36:17 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/18 16:49:28 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	isascii(int c)
{
	if (c <= 127)
		return 1;
	else 
		return 0;
}

int	main(void)
{
	unsigned char c = '\n';
	printf("%d", isascii(c));
	return 0;
}
