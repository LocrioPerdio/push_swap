/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:06:08 by lbiosca-          #+#    #+#             */
/*   Updated: 2026/06/17 14:36:02 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack_node **a)
{
	t_stack_node	*first;
	t_stack_node	*last_second;
	t_stack_node	*last;

	if (!*a || stack_size(*a) == 1)
		return ;
	first = *a;
	last = find_last(*a);
	last_second = last->prev;
	last_second->next = last->next;
	first->prev = last;
	last->next = first;
	last->prev = NULL;
	*a = last;
}

void	reverse_rotate_a(t_stack_node **a, t_stats *stats)
{
	count_op(stats, "rra");
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack_node **b, t_stats *stats)
{
	count_op(stats, "rrb");
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	reverse_rotate_rr(t_stack_node **a, t_stack_node **b, t_stats *stats)
{
	count_op(stats, "rrr");
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
