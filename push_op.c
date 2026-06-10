/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:47:38 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/10 12:55:36 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*first_b;
	t_stack_node	*second_b;

	if (!*b)
		return ;
	first_b = *b;
	if (first_b->next)
	{
		second_b = first_b->next;
		second_b->prev = NULL;
		*b = second_b;
	}
	else
		*b = NULL;
	add_node_front(a, first_b);
}

void	push_a(t_stack_node **a, t_stack_node **b)
{
	push(a, b);
	ft_printf("pa\n");
}

void	push_b(t_stack_node **a, t_stack_node **b)
{
	push(b, a);
	ft_printf("pb\n");
}
