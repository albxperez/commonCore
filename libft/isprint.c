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

int	isprint(int c)
{
	if(c > 31 && c < 127)
		return 0;
	else 
		return 1;
}

int	main(void)
{
	unsigned char c ='A' ;
	printf("%d", isprint(c));
	return 0;
}
