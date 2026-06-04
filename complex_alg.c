/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_alg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 23:02:52 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/04 15:58:10 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Vamos a trabajar con indices y su representacion interna en bits
(SOCORRO)

((n >> k) & 1) -> dime si el bit 'k' de 'n' es par o impar.
mientras haya bits:
{
	si bit == 0
		pb
	si bit == 1
		ra
}

  ----

  max_bits = número de bits del indice mas grande

	bit = 0

	mientras bit < max_bits

		size = tamaño original de stack_a

		repetir size veces

			si el bit actual del primer nodo es 0// if (((*a)->index & 1) == 0)???
				pb
			si no
				ra

		mientras stack_b no esté vacio
			pa

		bit++

*/

#include "push_swap.h"

void	radix_sort(t_stack_node **a)
{
	t_stack_node	**b;
	size_t			bit;
	size_t			max_bits;
	size_t			size;
	size_t			i;

	b = NULL;
	bit = 0;
	max_bits = get_max_bits(a);
	size = stack_size(*a) - 1;
	while (bit < max_bits)
	{
		i = 0;
		while (i <= size)
		{
			if (((*a)->index & 1) == 0)
				push_b(a, b);
			else
				rotate_a(a);
			i++;
		}
		printf("holi");
		while (b)
			push_a(a, b);
		bit++;
	}
}

size_t	get_bits(size_t n)
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

size_t	get_max_bits(t_stack_node **a)
{
	size_t	max_bits;
	size_t	max_index;

	max_index = assign_index(*a);
	max_bits = get_bits(max_index);
	return (max_bits);
}
