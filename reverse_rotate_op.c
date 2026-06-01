/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_op.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiosca- <lbiosca-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:06:08 by lbiosca-          #+#    #+#             */
/*   Updated: 2026/06/01 16:49:51 by lbiosca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*rra (reverse rotate a): Desplaza hacia abajo todos los elementos del stack a una
posición, convirtiendo el último elemento en el primero.
rrb (reverse rotate b): Desplaza hacia abajo todos los elementos del stack b una
posición, convirtiendo el último elemento en el primero
rrr : rra y rrb a la vez.
*/

#include "push_swap.h"

//TODO quitar esto para usar el del libft y cambiar la funcion en reverse_rotate
static t_stack_node	*ff_lstlast(t_stack_node *lst)
{
	t_stack_node	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	reverse_rotate(t_stack_node **a)
{
	t_stack_node	*first;
	t_stack_node	*last_second;
	t_stack_node	*last;

	//TODO ver si este if es necesario
	if (!*a || stack_size(*a) == 1)
		return ;
	first = *a;
	last = ff_lstlast(*a);
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
	printf("rra ");
}

void	reverse_rotate_b(t_stack_node **a)
{
	reverse_rotate(a);
	printf("rrb ");
}

void	reverse_rotate_rr(t_stack_node **a, t_stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	printf("rrr ");
}
