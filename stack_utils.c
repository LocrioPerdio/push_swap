/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 13:49:02 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/17 14:39:06 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_last(t_stack_node *lst)
{
	t_stack_node	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

int	stack_size(t_stack_node *a)
{
	int				count;
	t_stack_node	*ptr;

	count = 0;
	ptr = a;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

static t_stack_node	*new_node(int value)
{
	t_stack_node	*n;

	n = malloc(sizeof(t_stack_node));
	if (!n)
		return (NULL);
	n->value = value;
	n->index = 0;
	n->prev = NULL;
	n->next = NULL;
	return (n);
}

static void	add_node_back(t_stack_node **a, t_stack_node *new)
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
