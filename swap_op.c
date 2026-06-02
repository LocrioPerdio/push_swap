/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:55:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/02 22:06:36 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*sa (swap a): Intercambia los dos primeros elementos del stack a.
No hace nada si hay solo uno o ningún elemento.
sb (swap b): Intercambia los dos primeros elementos del stack b.
No hace nada si hay solo uno o ningún elemento.
ss : sa y sb a la vez.
*/

#include "push_swap.h"

void	swap(t_stack_node **a)
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

void	swap_a(t_stack_node **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	swap_b(t_stack_node **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	swap_ss(t_stack_node **a, t_stack_node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
