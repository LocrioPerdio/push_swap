/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiosca- <lbiosca-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:14:13 by lbiosca-          #+#    #+#             */
/*   Updated: 2026/06/01 16:49:58 by lbiosca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ra (rotate a): Desplaza hacia arriba todos los elementos del stack a una posición,
convirtiendo el primer elemento en el último.
rb (rotate b): Desplaza hacia arriba todos los elementos del stack b una posición,
convirtiendo el primer elemento en el último.
rr : ra y rb a la vez.
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

void	rotate(t_stack_node **a)
{
	t_stack_node	*first;
	t_stack_node	*second;
	t_stack_node	*last;

	//TODO ver si este if es necesario
	if (!*a || stack_size(*a) == 1)
		return ;
	first = *a;
	second = first->next;
	last = ff_lstlast(*a);
	first->next = last->next;
	first->prev = last;
	last->next = first;
	second->prev = NULL;
	*a = second;
}

void	rotate_a(t_stack_node **a)
{
	rotate(a);
	printf("ra ");
}

void	rotate_b(t_stack_node **a)
{
	rotate(a);
	printf("rb ");
}

void	rotate_rr(t_stack_node **a, t_stack_node **b)
{
	rotate(a);
	rotate(b);
	printf("rr ");
}
