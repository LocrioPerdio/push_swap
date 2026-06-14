/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 19:57:01 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/14 19:57:02 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	count_op(t_stats *stats, char *op)
{
	if (!stats)
		return ;
	stats->total_ops++;
	if (!ft_strcmp(op, "sa"))
		stats->sa++;
	else if (!ft_strcmp(op, "sb"))
		stats->sb++;
	else if (!ft_strcmp(op, "ss"))
		stats->ss++;
	else if (!ft_strcmp(op, "pa"))
		stats->pa++;
	else if (!ft_strcmp(op, "pb"))
		stats->pb++;
	else if (!ft_strcmp(op, "ra"))
		stats->ra++;
	else if (!ft_strcmp(op, "rb"))
		stats->rb++;
	else if (!ft_strcmp(op, "rr"))
		stats->rr++;
	else if (!ft_strcmp(op, "rra"))
		stats->rra++;
	else if (!ft_strcmp(op, "rrb"))
		stats->rrb++;
	else if (!ft_strcmp(op, "rrr"))
		stats->rrr++;
}

void	print_benchmark(t_stats *stats)
{
	print_disorder(stats);
	print_strategy(stats);
	print_ops(stats);
	ft_putstr_fd("\n", 1);
}

void	print_disorder(t_stats *stats)
{
	float	d_index;
	int		integer;
	int		fraction;

	d_index = stats->disorder;
	integer = (long)d_index;
	fraction = (d_index - integer) * 100;
	write(1, "[bench] disorder:  ", 18);
	ft_putnbr_fd(integer, 1);
	write(1, ".", 1);
	ft_putnbr_fd(fraction, 1);
	write(1, "%\n", 2);
}

void	print_strategy(t_stats *stats)
{
	ft_putstr_fd("[bench] strategy: ", 1);
	ft_putstr_fd(stats->algorithm, 1);
	ft_putstr_fd(" / ", 1);
	ft_putstr_fd(stats->complexity, 1);
	ft_putstr_fd("\n", 1);
}

void	print_ops(t_stats *stats)
{
	ft_putstr_fd("[bench] total_ops: ", 1);
	ft_putnbr_fd((int)stats->total_ops, 1);
	ft_putstr_fd("\n[bench] sa: ", 1);
	ft_putnbr_fd((int)stats->sa, 1);
	ft_putstr_fd(" sb: ", 1);
	ft_putnbr_fd((int)stats->sb, 1);
	ft_putstr_fd(" ss: ", 1);
	ft_putnbr_fd((int)stats->ss, 1);
	ft_putstr_fd(" pa: ", 1);
	ft_putnbr_fd((int)stats->pa, 1);
	ft_putstr_fd(" pb: ", 1);
	ft_putnbr_fd((int)stats->pb, 1);
	ft_putstr_fd("\n[bench] ra: ", 1);
	ft_putnbr_fd((int)stats->ra, 1);
	ft_putstr_fd(" rb: ", 1);
	ft_putnbr_fd((int)stats->rb, 1);
	ft_putstr_fd(" rr: ", 1);
	ft_putnbr_fd((int)stats->rr, 1);
	ft_putstr_fd(" rra: ", 1);
	ft_putnbr_fd((int)stats->rra, 1);
	ft_putstr_fd(" rrb: ", 1);
	ft_putnbr_fd((int)stats->rrb, 1);
	ft_putstr_fd(" rrr: ", 1);
	ft_putnbr_fd((int)stats->rrr, 1);
	ft_putstr_fd("\n", 1);
}
