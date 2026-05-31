/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:55:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/31 22:58:13 by paduarte         ###   ########.fr       */
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
	t_stack_node	*tmp;
	t_stack_node	*next;

	printf("aqui");
//	if (!*a || stack_size(*a) == 1)
//		return ;
	tmp = *a;
	next = tmp->next;
	*a = next;
	next = tmp;
	ft_printf("sa ");
}
