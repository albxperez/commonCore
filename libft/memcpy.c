/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:13:39 by aperez-r          #+#    #+#             */
/*   Updated: 2024/09/30 12:12:21 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
int	ft_strlen(const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    //se convierten los punteros void a char para poder manipular byte a byte
    unsigned char *d = (unsigned char*) dest;
    unsigned const char *s = (unsigned const char*) src;
    size_t i;

    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++; 
    }

    return d;

}

int main(void)
{
    const char src[10] = "hola mundo";
    char dest[5];
    //ft_memcpy(dest, src, ft_strlen(src) + 1);
    ft_memcpy(dest, src, 5);
    printf("%s", dest);
    printf("\n%s",src);
    memcpy(dest, src, 5);
    printf("\n%s", dest);
    printf("\n%s", src);
    return 0;
}
