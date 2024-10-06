/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:23:26 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/06 18:09:34 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
#include <fcntl.h>

int main(void)
{
	int fd = open("testfile.txt", O_WRONLY | O_CREAT, 0644);
	ft_putchar_fd('c', fd);
}*/
