/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:26:12 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/02 20:01:22 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	lenght;
	size_t	i;

	if (s == NULL)
		return (NULL);
	lenght = ft_strlen(s);
	str = malloc(lenght + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	const char str[] = "hola mundo";
	char *dup = ft_strdup(str);

	printf("%s", str);
	printf("\n%s", dup);
	return 0;
}*/
