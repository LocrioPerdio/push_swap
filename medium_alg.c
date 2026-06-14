/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_alg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:47:24 by lbiosca-          #+#    #+#             */
/*   Updated: 2026/06/14 18:46:38 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	find_max_pos(t_stack_node **stack, size_t max_index);
static void		return_stack(t_stack_node **stack, t_stack_node **a,
					t_stats *stats);
static size_t	chunk_size(size_t nb);

void	chunk_sort(t_stack_node **a, t_stack_node **b, t_stats *stats)
{
	size_t	start;
	size_t	end;
	size_t	s_size;
	size_t	i;
	size_t	chunk;

	start = 0;
	chunk = chunk_size((size_t)stack_size(*a));
	end = chunk;
	while (*a)
	{
		i = 0;
		s_size = (size_t)(stack_size(*a));
		while (i < s_size)
		{
			if (((*a)->index >= start && (*a)->index <= end))
				push_b(a, b, stats);
			else
				rotate_a(a, stats);
			i++;
		}
		start = end + 1;
		end = start + chunk;
	}
	return_stack(b, a, stats);
}

static size_t	find_max_pos(t_stack_node **stack, size_t max_index)
{
	size_t			max_pos;
	t_stack_node	*current;

	max_pos = 0;
	current = *stack;
	while (current)
	{
		if (current->index == max_index)
			return (max_pos);
		current = current->next;
		max_pos++;
	}
	return (0);
}

static void	return_stack(t_stack_node **stack, t_stack_node **a, t_stats *stats)
{
	size_t	s_size;
	size_t	max_index;

	s_size = (size_t)stack_size(*stack);
	max_index = s_size - 1;
	while ((*stack))
	{
		if ((*stack)->index == max_index)
		{
			push_a(a, stack, stats);
			max_index--;
			s_size--;
		}
		else if (find_max_pos(stack, max_index) > s_size / 2)
			reverse_rotate_b(stack, stats);
		else
			rotate_b(stack, stats);
	}
}

static size_t	chunk_size(size_t nb)
{
	size_t	result;

	result = 1;
	while (result < nb)
	{
		if (result * result == nb)
			return (result);
		else if (((result - 1) * (result - 1) < nb) && (result * result > nb))
			return (result);
		else
			result++;
	}
	return (result);
}
