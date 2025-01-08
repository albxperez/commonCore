/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:21:25 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/11 16:25:04 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		if (del != NULL && lst->content != NULL)
		{
			del(lst->content);
			free(lst);
		}
	}
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
	ft_lstdelone(str, free_content);
	return 0;
}*/
