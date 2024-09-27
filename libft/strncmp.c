/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:22:52 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/27 11:33:51 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;
	int	result;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		while(i < n)
		{
			if (str1[i] == str2[i])
			{
				i++;
			}
			else
			{
				result = str1[i] - str2[i];
				return (result);
			}
		}
	}
	return 0;
}

int	main(void)
{
	const char str1[] = "holamundo";
	const char str2[] = "holamundo";
	printf("%i", ft_strncmp(str1, str2, 9));
	return 0;
}
