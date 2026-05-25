/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:54:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/25 17:01:02 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	t_stack_node	*b;
	size_t	i;

	a = NULL;
	b = NULL;
	i = 1;

	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1); // exit?
	else if (argc == 2)
		{
			argv = ft_split(argv[1], ' ');
		}
	while(argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return(0);
}
