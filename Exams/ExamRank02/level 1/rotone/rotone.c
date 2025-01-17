/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:51:32 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/15 17:20:14 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char *str;
	str = argv[1];

	if(argc != 2 || argc == 1)
	{
		write(1,"\n",1);
		return 1;
	}
	int i = 0;
	char temp;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(str[i] == 'z')
				temp = str[i] - 25;
			else
				temp = str[i] + 1;
		write(1,&temp,1);
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			if(str[i] == 'Z')
				temp = str[i] - 25;
			else 
				temp = str[i] + 1;
		write(1,&temp,1);
		}
		else
			write(1,&str[i],1);
		i++;
	}
	write(1,"\n",1);
	return 0;

}
