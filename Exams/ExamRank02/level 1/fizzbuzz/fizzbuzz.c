/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:10:32 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/14 20:49:19 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int i = 1;
	char buffer[2];

	while(i<101)
	{
		if((i % 3 == 0) && (i % 5 == 0))
			write(1,"fizzbuzz",8);
		else if(i % 3 == 0)
			write(1,"fizz",4);
		else if(i % 5 == 0)
			write(1,"buzz",4);
		else
		{
			int len = 0;
			int temp = i;
			if(temp >= 10)
			{
				buffer[len++] = (temp / 10) + '0';
				temp %= 10;
			}
			buffer[len++] = temp + '0';
			write(1, buffer, len);	
		}
		write(1,"\n",1);
		i++;
	}
	return 0;
}
