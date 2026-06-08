#include "push_swap.h"

// TODO: optimizar incorporando la variable "pos (posicion)" de cada nodo
// para ver si la posicion del indice maximo esta en la primera o segunda
// mitad del stack para decidir si hacer rb o rrb

// // 1. Asignar índices.

// // 2. chunk_size = √n
// //    (o 15 para 100, 30 para 500)

// // 3. Mientras A tenga elementos:

// //       si top(A) pertenece al chunk actual:
// //             pb
// //             quizá rb
// //       si no:
// //             ra

// // 4. Cuando todos estén en B:

// while (B)
// {
// 	encontrar el mayor índice de B llevarlo arriba pa
// }

// //       mientras B no esté vacía:
// //             encontrar máximo
// //             rb o rrb
// //             pa

void	assign_pos(t_stack_node *a)
{
	t_stack_node	*current;
	size_t			pos;

	current = a;
	pos = 0;
	while (current)
	{
		current->pos = pos;
		pos++;
		current = current->next;
	}
}

size_t	get_max_index(t_stack_node **stack)
{
	size_t			max_index;
	t_stack_node	*tmp;

	max_index = 0;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->index > max_index)
			max_index = tmp->index;
		tmp = tmp->next;
	}
	return (max_index);
}

void	return_stack(t_stack_node **stack, t_stack_node **a)
{
	size_t	s_size;
	size_t	max_index;

	while ((*stack))
	{
		s_size = (size_t)stack_size(*stack);
		max_index = get_max_index(stack);
		assign_pos(*stack);
		if ((*stack)->index == max_index)
			push_a(a, stack);
		else if ((*stack)->pos < s_size / 2)
			reverse_rotate_b(stack);
		else
			rotate_b(stack);
	}
}

size_t	chunk_size(size_t nb)
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

void	chunk_sort(t_stack_node **a)
{
	t_stack_node	*b;
	size_t			start;
	size_t			end;
	size_t			s_size;
	size_t			i;

	b = NULL;
	start = 0;
	end = chunk_size((size_t)stack_size(*a));
	while (*a)
	{
		i = 0;
		s_size = (size_t)(stack_size(*a));
		while (i < s_size)
		{
			if (((*a)->index >= start && (*a)->index <= end))
				push_b(a, &b);
			else
				rotate_a(a);
			i++;
		}
		start = end + 1;
		end = start + end;
	}
	return_stack(&b, a);
}
