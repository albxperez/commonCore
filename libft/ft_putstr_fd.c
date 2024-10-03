/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:33:29 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/03 18:35:53 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if(s != NULL)
	{
		while(s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

/*int	main(void)
{
	char str[] = "helloworld";
	ft_putstr_fd(str, 1);
	return 0;
}*/
