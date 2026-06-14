/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:54:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/14 20:22:17 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sign(char c);
static int	valid_input(char *argv[]);
static void	run_algorithm(char *flag, t_stack_node **a, t_stack_node **b,
				t_stats *stats);

int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	t_stack_node	*b;
	t_stats			stats;
	int				start;
	char			*flag;

	a = NULL;
	b = NULL;
	flag = NULL;
	ft_bzero(&stats, sizeof(t_stats));
	if (argc < 2)
		return (1);
	start = parse_flags(argc, argv, &stats, &flag);
	valid_input(argv + start);
	a = init(argv + start);
	if (!a)
		return (1);
	stats.disorder = disorder_index(&a);
	run_algorithm(flag, &a, &b, &stats);
	if (stats.bench)
		print_benchmark(&stats);
	free_stack(&a);
	return (0);
}

static int	is_sign(char c)
{
	return (c == '+' || c == '-');
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

static void	run_algorithm(char *flag, t_stack_node **a, t_stack_node **b,
		t_stats *stats)
{
	if (!flag || !ft_strcmp(flag, "--adaptive"))
		adaptive_alg(a, b, stats);
	else if (!ft_strcmp(flag, "--simple"))
		set_simple(a, b, stats);
	else if (!ft_strcmp(flag, "--medium"))
		set_medium(a, b, stats);
	else if (!ft_strcmp(flag, "--complex"))
		set_complex(a, b, stats);
	else
		show_error(a, NULL);
}
