/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:22:52 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/02 18:38:30 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (!(str1[i] == str2[i]))
		{
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		}
		i++;
	}
	return 0;
}

/*int	main(void)
{
	const char str1[] = "test\200";
	const char str2[] = "test\0";
	printf("%i", ft_strncmp(str1, str2, 6));
	return 0;
}*/
