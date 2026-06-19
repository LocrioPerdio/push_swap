/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 21:16:49 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/19 14:50:04 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_ps(const char *nptr, t_stack_node **a, char **arg)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		res = res * 10 + (nptr[i] - 48);
		if ((sign * res) > INT_MAX || (sign * res) < INT_MIN)
			show_error(a, arg);
		i++;
	}
	return ((int)sign * res);
}

int	parse_flags(int argc, char **argv, t_stats *stats, char **flag)
{
	int	i;

	i = 1;
	while (i < argc && argv[i][0] == '-')
	{
		if (!ft_strcmp(argv[i], "--bench"))
		{
			if (stats->bench)
				show_error(NULL, NULL);
			stats->bench = 1;
		}
		else if (!*flag)
			*flag = argv[i];
		else
			show_error(NULL, NULL);
		i++;
	}
	return (i);
}

static int	total_pairs(t_stack_node **a)
{
	int	res;
	int	len;
	int	i;
	int	j;

	len = stack_size(*a);
	res = 0;
	i = 0;
	if (len == 1)
		return (0);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			res += 1;
			j++;
		}
		i++;
	}
	return (res);
}

float	disorder_index(t_stack_node **a)
{
	int				mistakes;
	int				pairs;
	t_stack_node	*tmp;
	t_stack_node	*next;

	mistakes = 0;
	pairs = total_pairs(a);
	tmp = *a;
	while (tmp)
	{
		next = tmp->next;
		while (next)
		{
			if (tmp->value > next->value)
				mistakes++;
			next = next->next;
		}
		tmp = tmp->next;
	}
	if (pairs == 0)
		return (0);
	return ((float)mistakes / pairs);
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}
