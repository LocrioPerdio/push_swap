/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_op.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:06:08 by lbiosca-          #+#    #+#             */
/*   Updated: 2026/06/10 13:07:43 by paduarte         ###   ########.fr       */
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

void	reverse_rotate_a(t_stack_node **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack_node **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

