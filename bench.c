/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 19:57:01 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/19 15:54:35 by paduarte         ###   ########.fr       */
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
	ft_putstr_fd("\n", 2);
}

void	print_disorder(t_stats *stats)
{
	float	d_index;
	int		integer;
	int		fraction;

	d_index = stats->disorder * 100.0f;
	integer = (long)d_index;
	fraction = (d_index - integer) * 100;
	write(2, "[bench] disorder:  ", 18);
	ft_putnbr_fd(integer, 2);
	write(2, ".", 1);
	if (fraction < 10)
		write(2, "0", 1);
	ft_putnbr_fd(fraction, 2);
	write(2, "%\n", 2);
}
// void    print_disorder(t_stats *stats)
// {
//     float d_index = stats->disorder * 100.0f;
//     int   integer = (int)d_index;
//     int   fraction = (int)((d_index - integer) * 100);

//     if (fraction < 0)
//         fraction = -fraction;

//     write(2, "[bench] disorder:  ", 18);
//     ft_putnbr_fd(integer, 2);
//     write(2, ".", 1);

//     if (fraction < 10)
//         write(2, "0", 1); // asegura dos dígitos

//     ft_putnbr_fd(fraction, 2);
//     write(2, "%\n", 2);
// }



void	print_strategy(t_stats *stats)
{
	ft_putstr_fd("[bench] strategy: ", 2);
	ft_putstr_fd(stats->algorithm, 2);
	ft_putstr_fd(" / ", 2);
	ft_putstr_fd(stats->complexity, 2);
	ft_putstr_fd("\n", 2);
}

void	print_ops(t_stats *stats)
{
	ft_putstr_fd("[bench] total_ops: ", 2);
	ft_putnbr_fd((int)stats->total_ops, 2);
	ft_putstr_fd("\n[bench] sa: ", 2);
	ft_putnbr_fd((int)stats->sa, 2);
	ft_putstr_fd(" sb: ", 2);
	ft_putnbr_fd((int)stats->sb, 2);
	ft_putstr_fd(" ss: ", 2);
	ft_putnbr_fd((int)stats->ss, 2);
	ft_putstr_fd(" pa: ", 2);
	ft_putnbr_fd((int)stats->pa, 2);
	ft_putstr_fd(" pb: ", 2);
	ft_putnbr_fd((int)stats->pb, 2);
	ft_putstr_fd("\n[bench] ra: ", 2);
	ft_putnbr_fd((int)stats->ra, 2);
	ft_putstr_fd(" rb: ", 2);
	ft_putnbr_fd((int)stats->rb, 2);
	ft_putstr_fd(" rr: ", 2);
	ft_putnbr_fd((int)stats->rr, 2);
	ft_putstr_fd(" rra: ", 2);
	ft_putnbr_fd((int)stats->rra, 2);
	ft_putstr_fd(" rrb: ", 2);
	ft_putnbr_fd((int)stats->rrb, 2);
	ft_putstr_fd(" rrr: ", 2);
	ft_putnbr_fd((int)stats->rrr, 2);
	ft_putstr_fd("\n", 2);
}
