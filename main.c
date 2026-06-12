/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:54:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/12 16:33:45 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int			is_sign(char c);
static t_stack_node	*init(char *argv[]);
static int			valid_input(char *argv[]);

int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	t_stack_node	*b;
	t_stats			stats;

	a = NULL;
	b = NULL;
	ft_bzero(&stats, sizeof(t_stats));
	if (argc < 2)
		return (1);
	if (argc > 1 && !ft_strcmp(argv[1], "--bench"))
	{
		stats.bench = 1;
		argv++;
		argc--;
	}
	valid_input(argv + 1);
	a = init(argv + 1);
	if (!a)
		return (1);
	stats->disorder = disorder_index(&a);
	choose_alg(&a, &b, &stats);
	if (stats.bench)
		print_benchmark(&stats);
	free_stack(&a);
	return (0);
}

static t_stack_node	*init(char *argv[])
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

static int	valid_input(char *argv[])
{
	size_t	i;
	size_t	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) || argv[i][j] == ' ')
				j++;
			else if (is_sign(argv[i][j]) && (j == 0 || argv[i][j - 1] == ' ')
				&& ft_isdigit(argv[i][j + 1]))
				j++;
			else
				show_error(NULL, NULL);
		}
		i++;
	}
	return (1);
}

static int	is_sign(char c)
{
	return (c == '+' || c == '-');
}
