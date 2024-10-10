/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:53:05 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/10 19:42:52 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	if(!lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*current_node;
	char	*str;
	char	*my_custom_data;

	my_custom_data = ft_strdup("hola");
	lst = ft_lstnew(my_custom_data);
	my_custom_data = ft_strdup("mundo");
	new = ft_lstnew(my_custom_data);

	ft_lstadd_front(&lst, new);
	current_node = new;
	while (current_node)
	{
		str = (char *) current_node->content;
		printf("Content of node:%s\n", str);
		current_node = current_node->next;
	}
}*/
