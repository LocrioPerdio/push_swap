/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:20:08 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/29 10:40:40 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*new_node(void *content)
{
	t_stack_node	*n;

	n = malloc(sizeof(t_stack_node));
	if (!n)
		return (NULL);
	n->value = content;
    n->index = 0;
    n->prev = NULL;
	n->next = NULL;
	return (n);
}
/*
  int main(void)
{
    t_list *node;
    int value = 42;
    node = ft_lstnew(&value);
    if (!node)
        return (1);
    printf("Contenido del nodo: %d\n", *(int *)node->content);
    printf("Siguiente nodo: %p\n", (void *)node->next);
    free(node);
    return (0);
}

*/