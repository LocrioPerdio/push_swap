/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:55:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/01 10:58:23 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*sa (swap a): Intercambia los dos primeros elementos del stack a.
No hace nada si hay solo uno o ningún elemento.
sb (swap b): Intercambia los dos primeros elementos del stack b.
No hace nada si hay solo uno o ningún elemento.
ss : sa y sb a la vez.
*/

#include "push_swap.h"

void	swap_a(t_stack_node **a)
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
	ft_printf("sa ");
}

void	swap_b(t_stack_node **a)
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
	ft_printf("sb ");
}

void	swap_ss(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*first_a;
	t_stack_node	*second_a;
	t_stack_node	*first_b;
	t_stack_node	*second_b;

	if (!*a || stack_size(*a) == 1)
		return ;
	first_a = *a;
	second_a = first_a->next;
	first_a->next = second_a->next;
	second_a->next = first_a;
	first_a->prev = second_a->prev;
	second_a->prev = NULL;
	*a = second_a;
	if (!*b || stack_size(*b) == 1)
		return ;
	first_b = *b;
	second_b = first_b->next;
	first_b->next = second_b->next;
	second_b->next = first_b;
	first_b->prev = second_b->prev;
	second_b->prev = NULL;
	*b = second_b;
	ft_printf("ss ");
}
