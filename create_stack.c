/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:20:08 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/31 21:59:22 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*new_node(int value);
void			add_node_back(t_stack_node **a, t_stack_node *new);
// float disorder_index(t_stack_node **a);
int			total_pairs(t_stack_node **a);

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
	ptr->next = new;
	new->prev = ptr;
}

float	disorder_index(t_stack_node **a)
{
	int		mistakes;
	int		pairs;
	t_stack_node *tmp;
	t_stack_node	*next;

	mistakes = 0;
	pairs = total_pairs(a);
	tmp = *a;
	while (tmp)
	{
		next = tmp->next;
		while (next)
		{
			if (tmp->value > next->value)
				mistakes ++;
			next = next->next;
		}
		tmp = tmp->next;
	}
	if (pairs == 0)
		return (0);
	return ((float)mistakes / pairs);
}

// puede simplificarse mucho con (len * (len - 1)) / 2
int	total_pairs(t_stack_node **a)
{
	int	res;
	int	len;
	int	i;
	int	j;

	len = stack_size(*a);
	res = 0;
	i = 0;
	if (len == 1)
		return (0);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			res += 1;
			j++;
		}
		i++;
	}
	return (res);
}


