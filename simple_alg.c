/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_alg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 16:46:29 by lbiosca-          #+#    #+#             */
/*   Updated: 2026/06/10 12:47:53 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	find_min_pos(t_stack_node **stack, size_t min_index)
{
	size_t			min_pos;
	t_stack_node	*current;

	min_pos = 0;
	current = *stack;
	while (current)
	{
		if (current->index == min_index)
			return (min_pos);
		current = current->next;
		min_pos++;
	}
	return (0);
}


void	selection_sort(t_stack_node **a, t_stack_node **b)
{
	size_t	s_size;
	size_t	min_index;

	min_index = 0;
	s_size = (size_t)stack_size(*a);
	while ((*a))
	{
		if ((*a)->index == min_index)
		{
			push_b(a, b);
			min_index++;
			s_size--;
		}
		else if (find_min_pos(a, min_index) > s_size / 2)
			reverse_rotate_a(a);
		else
			rotate_a(a);
	}
	while (*b)
		push_a(a, b);
}
