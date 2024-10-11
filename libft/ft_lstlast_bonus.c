/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:45:47 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/11 10:30:15 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if(lst == NULL)
		return NULL;
	while(lst->next != NULL)
		lst = lst->next;
	return lst;
}

/*int	main(void)
{
        t_list  *lst;
        t_list  *new;
        t_list  *current_node;
        char    *str;
        char    *my_custom_data;

        my_custom_data = ft_strdup("fin");
        lst = ft_lstnew(my_custom_data);
        my_custom_data = ft_strdup("inicio");
        new = ft_lstnew(my_custom_data);

        ft_lstadd_front(&lst, new);
	t_list *result = ft_lstlast(new);
	printf("%s", (char *)result->content);
	
}*/
