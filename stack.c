/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:20:08 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/08 16:08:03 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*new_node(int value);
void			add_node_back(t_stack_node **a, t_stack_node *new);


void	create_stack(t_stack_node **a, int n)
{
	t_stack_node	*node;

	check_dup(*a, n);
	node = new_node(n);
	if (!node)
		show_error(a);
	add_node_back(a, node);
}

t_stack_node	*new_node(int value)
{
	t_stack_node	*n;

	n = malloc(sizeof(t_stack_node));
	if (!n)
		return (NULL);
	n->value = value;
	n->index = 0;
	n->pos = 0;
	n->prev = NULL;
	n->next = NULL;
	return (n);
}

void	add_node_back(t_stack_node **a, t_stack_node *new)
{
	t_stack_node	*ptr;

	if (!a || !new)
		return ;
	if (*a == NULL)
	{
		*a = new;
		return ;
	}
	ptr = *a;
	while (ptr->next)
		ptr = ptr->next;
	new->prev = ptr;
	ptr->next = new;
}

void	add_node_front(t_stack_node **a, t_stack_node *new)
{
	if (!a || !new)
		return ;
	new->next = *a;
	new->prev = NULL;
	if (*a)
		(*a)->prev = new;
	*a = new;
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


