/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:10:34 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/02 19:39:40 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	int	*ptr;

	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nelem * elsize);
	return (ptr);
}

/*int	main(void)
{
	int *array;
	size_t num = 30;
	array = ft_calloc(num, 1);

    	for (size_t i = 0; i < num; i++)
    	{
        	printf("%d ", array[i]);
    	}
	free(array);
	return 0;
}*/
