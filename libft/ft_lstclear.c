/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:55:51 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/09 20:19:34 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	ptr = NULL;
	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	*lst = NULL;
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*tmp;
	char	*value1;
	char	*value2;
	char	*value3;
	
	value1 = malloc(6);
	value2 = malloc(7);
	value3 = malloc(8);
	strcpy(value1, "Rikku");
	strcpy(value2, "Kukiti");
	strcpy(value3, "Rikkura");
	node1 = ft_lstnew(value1);
	node2 = ft_lstnew(value2);
	node3 = ft_lstnew(value3);
	list = NULL;
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	tmp = list;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&list, free);
	if (list == NULL)
	printf("Lista vaciada correctamente\n");
	return (0);
}
*/