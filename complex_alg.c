/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_alg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 23:02:52 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/12 16:07:42 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	get_bits(size_t n);
static size_t	get_max_bits(t_stack_node **a);

void	radix_sort(t_stack_node **a, t_stack_node **b)
{
	size_t	bit;
	size_t	max_bits;
	size_t	size;
	size_t	i;

	bit = 0;
	max_bits = get_max_bits(a);
	size = stack_size(*a);
	while (bit < max_bits)
	{
		i = 0;
		while (i < size)
		{
			if ((((*a)->index >> bit) & 1) == 0)
				push_b(a, b, stats);
			else
				rotate_a(a, stats);
			i++;
		}
		while (*b)
			push_a(a, b, stats);
		bit++;
	}
}

static size_t	get_bits(size_t n)
{
	size_t	count;

	count = 0;
	while (n)
	{
		n >>= 1;
		count++;
	}
	return (count);
}

static size_t	get_max_bits(t_stack_node **a)
{
	size_t	max_bits;
	size_t	max_index;

	max_index = (size_t)stack_size(*a) - 1;
	max_bits = get_bits(max_index);
	return (max_bits);
}
