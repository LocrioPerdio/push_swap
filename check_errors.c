/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:18:25 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/26 23:52:36 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int  show_error(void);

int	check_errors(char *argv[])
{
	size_t	i;

	i = 1;
	while (argv[i])
	{
		if ((ft_atoll(argv[i]) > INT_MAX) || ft_atoll(argv[i]) == 0
			|| check_dup(argv))
		{
			ft_printf("Error\n");
			return (2);
		}
		i++;
	}
	return (0);
}

int	check_dup(char *argv[])
{
	size_t	i;
	size_t	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (!ft_strcmp(argv[i], argv[j]))
				return (2);
			j++;
		}
		i++;
	}
	return (0);
}

/*static int  show_error(void)
{
	ft_printf("Error\n");
	return(2);
}*/