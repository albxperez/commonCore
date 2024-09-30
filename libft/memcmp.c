/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:19:46 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/30 12:13:50 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *s1 = (unsigned char*) str1;
	unsigned char *s2 = (unsigned char*) str2;
	size_t	i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return 0;
}

int	main(void)
{
	char str1[] = "ABA";
	char str2[] = "ABZ";
	int result = ft_memcmp(str1, str2, 3);
	printf("%d", result);
	return 0;
}
