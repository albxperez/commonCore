/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:29:06 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/11 16:21:31 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	t_list  *lst;
        t_list  *new;
        t_list  *current_node;
        char    *str;
        char    *my_custom_data;

        my_custom_data = ft_strdup("hola");
        lst = ft_lstnew(my_custom_data);
        my_custom_data = ft_strdup("mundo");
        new = ft_lstnew(my_custom_data);

       	ft_lstadd_front(&lst,new);
	int result = ft_lstsize(new);
	printf("%i", result);
	return 0;
}*/
