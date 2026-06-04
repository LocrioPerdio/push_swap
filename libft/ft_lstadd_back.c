/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:18:47 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/28 11:56:32 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)

{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
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
	return (0);
}
*/
