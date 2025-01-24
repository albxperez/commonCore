/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <aperez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:49:24 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/22 18:34:06 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include "lib/libft.h"
# include <stdbool.h>

typedef struct s_node
{
	int				data;
	struct s_list	*next;
	struct s_list	*prev;
}					t_node;

//movements
void				push(t_node **stack_1, t_node **stack_2);
void				pa(t_node **a, t_node **b);
void				pb(t_node **a, t_node **b);
void				swap(t_node **stack);
void				sa(t_node **a);
void				sb(t_node **b);
void				ss(t_node **a, t_node **b);
void				rotate(t_node **stack);
void				ra(t_node **a);
void				rb(t_node **b);
void				rr(t_node **a, t_node *b);
void				reverse_rotate(t_node **stack);
void				rra(t_node **a);
void				rrb(t_node **b);
void				rrr(t_node **a, t_node **b);

//stack
t_node	fill_stack(char **arguments, int argc);
t_node	create_stack(void);
#endif
