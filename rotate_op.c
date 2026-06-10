/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiosca- <lbiosca-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:14:13 by lbiosca-          #+#    #+#             */
/*   Updated: 2026/06/10 15:48:09 by lbiosca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack_node **a)
{
	t_stack_node	*first;
	t_stack_node	*second;
	t_stack_node	*last;

	if (!*a || stack_size(*a) == 1)
		return ;
	first = *a;
	second = first->next;
	last = find_last(*a);
	first->next = last->next;
	first->prev = last;
	last->next = first;
	second->prev = NULL;
	*a = second;
}

void	rotate_a(t_stack_node **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rotate_b(t_stack_node **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rotate_rr(t_stack_node **a, t_stack_node **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
