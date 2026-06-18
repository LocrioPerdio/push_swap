/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_adaptive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:47:13 by lbiosca-          #+#    #+#             */
/*   Updated: 2026/06/18 10:59:12 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive_alg(t_stack_node **a, t_stack_node **b, t_stats *stats)
{
	float	d_index;

	d_index = stats->disorder;
	stats->algorithm = "Adaptive";
	if (d_index < 0.2)
	{
		stats->complexity = "O(n)";
		selection_sort(a, b, stats);
	}
	else if (d_index >= 0.2 && d_index < 0.5)
	{
		stats->complexity = "O(n*sqrt(n))";
		chunk_sort(a, b, stats);
	}
	else
	{
		stats->complexity = "O(n log n)";
		radix_sort(a, b, stats);
	}
}
