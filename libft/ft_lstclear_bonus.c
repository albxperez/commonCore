/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:02:18 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/11 12:18:38 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list	*node;
	t_list	*temp;

	node = *lst;
	while(node != NULL)
	{
		temp = node->next;
		if(del != NULL && node->content != NULL)
		{
			del(node->content);
			free(node);
			node = temp;
		}
	}
	*lst = NULL;
		
}
/*
void	free_content(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	*str;

	char *node = ft_strdup("so long, london");
	str = ft_lstnew(node);
	ft_lstclear(&str, free_content);
	return 0;

}*/
