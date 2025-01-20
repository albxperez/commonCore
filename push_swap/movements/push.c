/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:05:16 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/20 20:43:39 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **stack_1, t_node **stack_2)
{
	t_node	*aux;

	if (*stack_1 == NULL)
		return ;
	aux = *stack_1;
	*stack_1 = (*stack_1)->next;
	if (*stack_1 != NULL)
		(*stack_1)->prev = NULL;
	aux->prev = NULL;
	if (*stack_2 == NULL)
	{
		*stack_2 = aux;
		aux->next = NULL;
	}
	else
	{
		aux->next = *stack_2;
		*stack_2->prev = aux;
		*stack_2 = aux;
	}
}

void	pa(t_node **a, t_node **b)
{
	push(a, b);
	ft_printf("pa\n");
}

void	pb(t_node **a, t_node **b)
{
	push(b, a);
	ft_printf("pb\n";)
}
