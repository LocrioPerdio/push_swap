/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:20:08 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/07 20:39:01 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->content = content;
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