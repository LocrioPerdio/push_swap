/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:25:11 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/10 15:25:22 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	new_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	*to_upper(void *content)
{
	char	*str;
	char	*new;
	int		i;

	str = (char *)content;
	i = 0;
	new = malloc(strlen(str) + 1);
	if (!new)
		return (NULL);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			new[i] = str[i] - 32;
		else
			new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

void	del_content(void *content)
{
  free(content);
}

int	main(void)
{
  t_list node1;
  t_list node2;
  t_list node3;
  t_list *new_list;

  node1.content = "Rikku";
  node1.next = &node2;
  node2.content = "es";
  node2.next = &node3;
  node3.content = "muy bonita";
  node3.next = NULL;
  new_list = ft_lstmap(&node1, to_upper, del_content);
  while (new_list)
	{
		printf("%s\n", (char *)new_list->content);
		new_list = new_list->next;
	}
  free(new_list);
   return(0);
}
*/