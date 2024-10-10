/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:49:18 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/10 18:54:25 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *nodo;

	nodo =(t_list *)malloc(sizeof(t_list));
	if(nodo == NULL)
		return NULL;
	nodo->content = content;
	nodo->next = NULL;
	return(nodo);
}

/*
int	main(void)
{
	char *content = "hello";
   	t_list *result = ft_lstnew(content);

   	if (result != NULL) {
	       	printf("%s\n", (char *)result->content);
	} else {
		printf("Error al crear el nodo.\n");
	}
	free(result);
	return 0;
}
*/
