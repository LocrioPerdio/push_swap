/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:50:35 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/12 14:43:24 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
	ft_strcpy(value1, "Rikku");
	ft_strcpy(value2, "Kukiti");
	ft_strcpy(value3, "Rikkura");
	node1 = ft_lstnew(value1);
	node2 = ft_lstnew(value2);
	node3 = ft_lstnew(value3);
	list = NULL;
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);
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