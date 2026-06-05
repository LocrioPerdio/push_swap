#include "push_swap.h"


// t_stack_node	*find_highest(t_stack_node *stack)
// {
// 	int				highest;
// 	t_stack_node	*highest_node;

// 	if (!stack)
// 		return (NULL);
// 	highest = INT_MIN;
// 	while (stack)
// 	{
// 		if (stack->value > highest)
// 		{
// 			highest = stack->value;
// 			highest_node = stack;
// 		}
// 		stack = stack->next;
// 	}
// 	return (highest_node);
// }

// void	order_3(t_stack_node **stack)
// {
// 	t_stack_node	*highest_node;

// 	highest_node = find_highest(*stack);
// 	if (*stack == highest_node)
// 		rotate_a(stack);
// 	else if ((*stack)->next == highest_node)
// 		reverse_rotate_a(stack);
// 	if ((*stack)->value > (*stack)->next->value)
// 		swap_a(stack);
// }

int	get_chunk(int nb)
{
	int	result;

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


void	medium_alg(t_stack_node **a)
{
	t_stack_node	*b;
	size_t			i;
	size_t			size;

	b = NULL;
	i = 0;
	size = (size_t)(stack_size);
	while (n < size)
	{
		while (i < n)
		{
			push_b(a, &b);
			i++;
		}
		order_3(&b);
		while (b)
			push_a(a, &b);
		n = 3 + i;
	}
}
