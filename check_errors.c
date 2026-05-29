/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:18:25 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/29 17:16:35 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	check_dup(t_stack_node *stack, int n)
{
	while (stack)
	{
		if (stack->value == n)
			show_error(NULL);
		stack = stack->next;
	}
	return (0);
}

void	show_error(t_stack_node **stack)
{
	if (stack)
		free_stack(stack);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node *tmp;

	if (!stack || !*stack)
		return;
	while(*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

void free_matrix(char **matrix)
{
	size_t	i;

	i = 0;
	if (!matrix)
		return;
	while(matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
