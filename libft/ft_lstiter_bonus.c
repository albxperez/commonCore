/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:19:09 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/11 13:08:32 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{

	if(!lst || !f)
		return ;
	while(lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}

}

/*void print_content(void *content)
{
    printf("%s\n", (char *)content);
}
int	main(void)
{
	t_list	*lst;
	t_list	*new;
	char	*my_custom_data;

	my_custom_data = ft_strdup("principio");
	lst = ft_lstnew(my_custom_data);
	my_custom_data = ft_strdup("final");
	new = ft_lstnew(my_custom_data);
	ft_lstadd_back(&lst, new);
	ft_lstiter(lst, print_content);
	return 0;

}*/
