/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:44:57 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/20 20:45:32 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*aux;
	t_node	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	aux = *stack;
	*stack = (*stack)->next; // ptr al siguiente nodo
	(*stack)->prev = NULL;
	//último nodo de la lista
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	last->next = aux; // el último es el que era el primero
	aux->prev = last;
	aux->next = NULL;
}

void	ra(t_node **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_node **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_node **a, t_node *b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
