/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:23:24 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/14 19:50:37 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*init(char *argv[])
{
	t_stack_node	*a;
	size_t			i;
	char			**arg;
	char			**tmp;

	a = NULL;
	i = 0;
	arg = NULL;
	while (argv[i])
	{
		arg = ft_split(argv[i], ' ');
		tmp = arg;
		while (*tmp)
		{
			if (create_stack(&a, ft_atoi_ps(*tmp, &a, arg)))
				show_error(&a, arg);
			tmp++;
		}
		free_matrix(arg);
		i++;
	}
	assign_index(a);
	return (a);
}

int	parse_flags(int argc, char **argv, t_stats *stats, char **flag)
{
	int	i;

	i = 1;
	while (i < argc && argv[i][0] == '-')
	{
		if (!ft_strcmp(argv[i], "--bench"))
			stats->bench = 1;
		else if (!*flag)
			*flag = argv[i];
		else
			show_error(NULL, NULL);
		i++;
	}
	return (i);
}
