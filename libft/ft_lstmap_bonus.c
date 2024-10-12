/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:27:02 by aperez-r          #+#    #+#             */
/*   Updated: 2024/10/11 19:04:30 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;
	void	*new_content;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			free(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// Función duplica el valor de un entero
void	*duplicate_content(void *content)
{
    int	*new_content = (int *)malloc(sizeof(int));

    if (!new_content)
        return (NULL);
    *new_content = (*(int *)content) * 2;
    return (new_content);
}


// Función para imprimir la lista
void	print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", *(int *)(lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

void	free_content(void *content)
{
	free(content);
}

int	main(void)
{
    // Crear lista original con enteros
    t_list	*list = NULL;
    int		*a = malloc(sizeof(int));
    int		*b = malloc(sizeof(int));
    int		*c = malloc(sizeof(int));

    *a = 1;
    *b = 2;
    *c = 3;

    ft_lstadd_back(&list, ft_lstnew(a));
    ft_lstadd_back(&list, ft_lstnew(b));
    ft_lstadd_back(&list, ft_lstnew(c));

    printf("Lista original:\n");
    print_list(list);

    // Llamar a ft_lstmap para duplicar los valores de la lista
    t_list	*new_list = ft_lstmap(list, duplicate_content, free_content);

    printf("Lista nueva (valores duplicados):\n");
    print_list(new_list);

    // Liberar las dos listas
    ft_lstclear(&list, del_content);
    ft_lstclear(&new_list, del_content);

    return (0);
}