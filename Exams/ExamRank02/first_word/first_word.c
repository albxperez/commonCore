/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:23:22 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/13 19:06:16 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;
	char	*str;

	str = argv[1];

	i = 0;
	if(argc != 2 || argc == 1)
		write(1,"\n",1);
	else
	{
		while(str[i] == ' ' || str[i] == '	')
		       i++;	
		while(str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			write(1,&str[i],1);
			i++;
		}
		write(1,"\n",1);
	}
	return 0;
}
