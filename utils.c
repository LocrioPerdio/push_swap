/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 21:16:49 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/10 21:35:03 by paduarte         ###   ########.fr       */
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

int	stack_size(t_stack_node *a)
{
	int				count;
	t_stack_node	*ptr;

	count = 0;
	ptr = a;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
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

t_stack_node	*find_last(t_stack_node *lst)
{
	t_stack_node	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
