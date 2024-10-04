/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:53:11 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/04 16:15:23 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	if (s == (void *)0 || f == (void *)0)
		return;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void replace_vowels(unsigned int index, char *c) {

    if (*c == 'a' || *c == 'e' || *c == 'i' || *c == 'o' || *c == 'u' ||
        *c == 'A' || *c == 'E' || *c == 'I' || *c == 'O' || *c == 'U') {
        *c = '*';
    }
}int	main(void)
{
	char str[] = "hello world";
	ft_striteri(str, replace_vowels);
	printf("%s", str);
	return 0;
}*/
