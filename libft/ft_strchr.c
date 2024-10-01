/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:05:57 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/27 10:37:21 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i  = 0;
	while (s[i] != '\0')
	{
		if(s[i] == c)
			return (char *)&s[i];
		i++;
	}

	if(c == '\0')
		//&=operador de direccion
		return (char *)&s[i];

	return NULL;

}

int	main(void)
{
	const char str[] = "hola mundo";
	printf("%p",ft_strchr(str, 'a'));
	char *resultado = ft_strchr(str, 'a');
        printf("\n%s", resultado);
	return 0;
}