/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:20:08 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/29 23:32:15 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*new_node(int value);
void			add_node_back(t_stack_node **a, t_stack_node *new);
// float disorder_index(t_stack_node **a);
int				stack_size(t_stack_node *a);
int				total_pairs(t_stack_node **a);

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
	size_t	i;
	size_t	j;
	float	res;

	mistakes = 0.00;
	i = 0;
	res = 0.00;
	while (*a)
	{
		j = i + 1;
		if ()
	}
	res = mistakes / total_pairs(&a);
	return (res);
}


float	total_pairs(t_stack_node **a)
{
	int		res;
	int		len;
	int		i;
	int		j;

	len = stack_size(*a);
	res = 0;
	i = 0;
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

/*

function	compute_disorder(stack a):
	mistakes = 0
	total_pairs = 0
	for i from 0 to size(a)-1:
		for j from i+1 to size(a)-1:
		total_pairs += 1
	if a[i] > a[j]:
		mistakes += 1
	return mistakes / total_pairs
*/

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
