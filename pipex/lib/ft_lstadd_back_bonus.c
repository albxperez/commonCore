/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:30:39 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/11 17:44:07 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (*lst == NULL)
		*lst = new;
	else
	{
		node = ft_lstlast(*lst);
		node->next = new;
	}
}

/*int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*current_node;
	char	*str;
	char	*my_custom_data;

	my_custom_data = ft_strdup("principio");
	lst = ft_lstnew(my_custom_data);
	my_custom_data = ft_strdup("final");
	new = ft_lstnew(my_custom_data);

	ft_lstadd_back(&lst, new);
	current_node = lst;
	while (current_node)
	{
		str = (char *) current_node->content;
		printf("Content of node:%s\n", str);
		current_node = current_node->next;
	}
	return 0;
}*/
