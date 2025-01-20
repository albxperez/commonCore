/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:49:24 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/20 18:02:04 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int	size;
}				t_stack;

typedef struct s_node
{
	int				data;
	struct s_list	*next;
	struct s_list	*prev;
}				t_node;

#endif 
