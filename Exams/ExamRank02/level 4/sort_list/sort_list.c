/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:55:29 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/17 19:04:16 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*tmp;

	tmp = lst;
	while (lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
