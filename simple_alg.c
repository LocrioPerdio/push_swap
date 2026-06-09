/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_alg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 16:46:29 by lbiosca-          #+#    #+#             */
/*   Updated: 2026/06/09 21:35:22 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	find_min_pos(t_stack_node **stack, size_t min_index)
{
	size_t	min_pos;
	t_stack_node	*current;

	min_pos = 0;
	current = *stack;
	while(current)
	{
		if (current->index == min_index)
			return(min_pos);
		current = current->next;
		min_pos++;
	}
	return(0);
}
size_t	get_min_index(t_stack_node **stack)
{
	size_t			min_index;
	t_stack_node	*tmp;

	min_index = 0;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->index < min_index)
			min_index = tmp->index;
		tmp = tmp->next;
	}
	return (min_index);
}

void	selection_sort(t_stack_node **a, t_stack_node **b)
{
	size_t			s_size;
	size_t	min_index;
	//TODO yo creo que no hace falta usar la funcion get_min_index, porque empieza en 0, pero weno xd
	min_index = get_min_index(a);
	while ((*a))
	{
		s_size = (size_t)stack_size(*a);
		if ((*a)->index == min_index)
			{
				push_b(a, b);
				min_index++;
			}
		else if (find_min_pos(a, min_index) > s_size / 2)
			reverse_rotate_a(a);
		else
			rotate_a(a);
	}
	while (*b)
		push_a(a, b);
}
