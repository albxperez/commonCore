/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:20:54 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/20 21:20:56 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	if (last->prev != NULL)
		last->prev->next = NULL;
	last->next = *stack; // el ultimo nodo se pone al principio
	(*stack)->prev = last;
	last->prev = NULL;
	*stack = last;
}

void	rra(t_node **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}
void	rrb(t_node **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}
void	rrr(t_node **a, t_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}