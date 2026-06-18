/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiosca- <lbiosca-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 19:00:34 by lbiosca-          #+#    #+#             */
/*   Updated: 2026/06/18 20:41:38 by lbiosca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack_node **a, t_stats *stats)
{
	while ((*a)->index != 2)
		rotate_a(a, stats);
	rotate_a(a, stats);
	if ((*a)->index == 1)
		swap_a(a, stats);
}

static void	sort_five(t_stack_node **a, t_stack_node **b, t_stats *stats)
{
	int	num;

	num = 0;
	while (num < 2)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
		{
			push_b(a, b, stats);
			num++;
		}
		else
			rotate_a(a, stats);
	}
	while ((*a)->index != 4)
		rotate_a(a, stats);
	rotate_a(a, stats);
	if ((*a)->index == 3)
		swap_a(a, stats);
	while (*b)
	{
		if ((*b)->index == 0)
			rotate_b(b, stats);
		push_a(a, b, stats);
	}
}

void	sort_short(t_stack_node **a, t_stack_node **b, t_stats *stats)
{
	if (stack_size(*a) == 3)
		sort_three(a, stats);
	else
		sort_five(a, b, stats);
}
