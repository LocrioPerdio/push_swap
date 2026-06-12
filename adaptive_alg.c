/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_alg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:47:13 by lbiosca-          #+#    #+#             */
/*   Updated: 2026/06/12 16:37:28 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	choose_alg(t_stack_node **a, t_stack_node **b, t_stats *stats)
{
	float	d_index;

	d_index = stats->disorder;
	if (d_index == 0.000000)
		return (1);
	else if (d_index < 0.2)
	{
		stats->algorithm = "Simple";
		stats->complexity = "O(n)";
		selection_sort(a, b, stats);
	}
	else if (d_index >= 0.2 && d_index < 0.5)
	{
		stats->algorithm = "Medium";
		stats->complexity = "O(n*sqrt(n))";
		chunk_sort(a, b, stats);
	}
	else
	{
		stats->algorithm = "Complex";
		stats->complexity = "O(n log n)";
		radix_sort(a, b, stats);
	}
	return (0);
}
