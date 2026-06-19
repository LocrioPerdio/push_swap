/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 13:28:51 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/19 14:25:44 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_all(t_stats *stats, char *flag)
{
	if (!flag || !ft_strcmp(flag, "--adaptive"))
	{
		stats->algorithm = "Adaptive";
		stats->complexity = "O(n)";
	}
	else if (!ft_strcmp(flag, "--simple"))
	{
		stats->algorithm = "Simple";
		stats->complexity = "O(n)";
	}
	else if (!ft_strcmp(flag, "--medium"))
	{
		stats->algorithm = "Medium";
		stats->complexity = "O(n*sqrt(n))";
	}
	else if (!ft_strcmp(flag, "--complex"))
	{
		stats->algorithm = "Complex";
		stats->complexity = "O(n log n)";
	}
}

void	set_simple(t_stack_node **a, t_stack_node **b, t_stats *stats)
{
	stats->algorithm = "Simple";
	stats->complexity = "O(n)";
	selection_sort(a, b, stats);
}

void	set_medium(t_stack_node **a, t_stack_node **b, t_stats *stats)
{
	stats->algorithm = "Medium";
	stats->complexity = "O(n*sqrt(n))";
	chunk_sort(a, b, stats);
}

void	set_complex(t_stack_node **a, t_stack_node **b, t_stats *stats)
{
	stats->algorithm = "Complex";
	stats->complexity = "O(n log n)";
	radix_sort(a, b, stats);
}
