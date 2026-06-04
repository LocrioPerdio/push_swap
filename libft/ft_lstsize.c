/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:33:44 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/09 20:12:34 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	count = 0;
	ptr = lst;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
/*
int main(void) 
{
	t_list node1;
	t_list node2;
	t_list node3;
    
	node1.content = "Rikku";
	node1.next = &node2;
	node2.content = "la más";
	node2.next = &node3;
	node3.content = "kuki";
	node3.next = NULL;
	printf("Total: %d \n",ft_lstsize(&node1));
	return(0);
}
*/