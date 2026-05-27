/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:18:25 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/27 15:22:42 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_errors(char *argv[])
{
	size_t	i;
	size_t j;
	int *numbers;

	i = 1;
	j = 0;
	//numbers = asignar memoria suficiente (el total de argv * sizeof(int) (+1???????????)
	while (argv[i])
	{
		if (ft_atoll(argv[i]) > INT_MAX || ft_atoll(argv[i]) < INT_MIN) 
		{
			ft_printf("Error\n");
			return (2);
		}
		//numbers[j++] = ft_atoi(argv[i++]);
	}
	return (0);
}

int	check_dup(int *numbers)
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