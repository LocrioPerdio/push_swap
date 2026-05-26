/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:18:25 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/26 16:22:05 by paduarte         ###   ########.fr       */
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
		if ((ft_atoll(argv[i]) > INT_MAX) || ft_atoll(argv[i]) == 0)
			{
                ft_printf("Error\n");
                return(2);
            }
		i++;		
	}
	return (0);
}

//argv[i] es solo numero??: 

/*static int  show_error(void)
{
	ft_printf("Error\n");
	return(2);
}*/