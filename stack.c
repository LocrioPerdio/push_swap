/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:20:08 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/17 13:59:49 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_stack(t_stack_node **a, int n)
{
	t_stack_node	*node;

	if (check_dup(*a, n))
		return (1);
	node = new_node(n);
	if (!node)
		show_error(a, NULL);
	add_node_back(a, node);
	return (0);
}

t_stack_node	*init(char *argv[])
{
	t_stack_node	*a;
	size_t			i;
	char			**arg;
	char			**tmp;

	a = NULL;
	i = 0;
	arg = NULL;
	while (argv[i])
	{
		arg = ft_split(argv[i], ' ');
		tmp = arg;
		while (*tmp)
		{
			if (create_stack(&a, ft_atoi_ps(*tmp, &a, arg)))
				show_error(&a, arg);
			tmp++;
		}
		free_matrix(arg);
		i++;
	}
	assign_index(a);
	return (a);
}

void	assign_index(t_stack_node *a)
{
	t_stack_node	*current;
	t_stack_node	*tmp;
	size_t			index;

	current = a;
	while (current)
	{
		index = 0;
		tmp = a;
		while (tmp)
		{
			if (current->value > tmp->value)
				index++;
			tmp = tmp->next;
		}
		current->index = index;
		current = current->next;
	}
}
