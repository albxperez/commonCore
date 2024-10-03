/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:43:27 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/03 18:35:32 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
int     i;

        i = 0;
        if(s != NULL)
        {
                while(s[i] != '\0')
                {
                        write(fd, &s[i], 1);
                        i++;
                }
		write(fd, "\n", 1);
        }
}

/*int	main(void)
{
	char str[] = "helloworld";
	ft_putendl_fd(str, 0);
	return 0;
}*/
