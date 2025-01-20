/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:42:24 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/20 20:04:56 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack)
{
	t_node *aux :
		if (*stack == NULL || (*stack)->next == NULL) return ;
	aux = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	if (aux->next != NULL)
		aux->next->prev = aux;
	aux->next = (*stack)->next;
	(*stack)->next = aux;
}

void	sa(t_node **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_node **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_node **a, t_node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
