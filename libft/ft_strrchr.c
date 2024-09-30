/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:21:47 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/27 10:36:37 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if(s[len] == c)
			return (char *)&s[len];
		len--;
	}

	if(c == '\0')
		//&=operador de direccion
		return (char *)&s[len];

	return NULL;
}

int	main(void)
{
	const char str[] = "hola mundo";
	printf("%p", ft_strrchr(str, 'h'));
	char *resultado = ft_strrchr(str, 'h');
	printf("\n%s", resultado);
	return 0;
}
