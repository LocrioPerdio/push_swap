/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:55:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/12 16:03:58 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack_node **a)
{
	t_stack_node	*first;
	t_stack_node	*second;

	if (!*a || stack_size(*a) == 1)
		return ;
	first = *a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	first->prev = second->prev;
	second->prev = NULL;
	*a = second;
}

void	swap_a(t_stack_node **a, t_stats *stats)
{
	count_op(stats, "sa");
	swap(a);
	ft_printf("sa\n");
}

void	swap_b(t_stack_node **b, t_stats *stats)
{
	count_op(stats, "sb");
	swap(b);
	ft_printf("sb\n");
}

void	swap_ss(t_stack_node **a, t_stack_node **b, t_stats *stats)
{
	count_op(stats, "ss");
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
