/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:46:54 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/15 18:06:37 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if(argc == 1)
	{
		write(1,"0",1);
		write(1,"\n",1);
		return 1;
	}


	int i = 0 ;
	while(argv[i + 1] != (void *)0)
		i++;
	int len = 0;
	int temp = 0;
	char buffer[2];
	temp = i;
	if(temp >= 10)
	{
		buffer[len++] = temp / 10 + '0';
		temp %= 10;
	}
	buffer[len++] = temp + '0';
	write(1,buffer, len);
	write(1,"\n",1);
	return 0;

}
