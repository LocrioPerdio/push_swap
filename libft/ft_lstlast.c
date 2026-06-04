/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:58:04 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/03 16:39:14 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (!lst)
		return (NULL);
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
/*int main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;
	t_list	*empty;

	lst = NULL;
	node1 = ft_lstnew("contenido 1");
	node2 = ft_lstnew("contenido 2");
	node3 = ft_lstnew("contenido 3");
	// Agregar nodos
	ft_lstadd_front(&lst, node3);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node1);
	// Probar ft_lstlast
	last = ft_lstlast(lst);
	if (last)
		printf("Último nodo: %s\n", (char *)last->content);
	// Prueba con lista vacía
	empty = NULL;
	last = ft_lstlast(empty);
	printf("Lista vacía retorna: %p (debe ser NULL)\n", (void *)last);
	return (0);
}
*/