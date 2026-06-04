/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:11:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/12 19:14:16 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	ptr = lst;
	while (ptr)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}

/*static void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("Hola");
	node2 = ft_lstnew("Mundo");
	node3 = ft_lstnew("42");

	node1->next = node2;
	node2->next = node3;

	ft_lstiter(node1, print_content);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/