/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:54:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/31 22:16:48 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				is_sign(char *argv);
t_stack_node	*init(char *argv[]);
int				valid_input(char *argv[]);


int	main(int argc, char *argv[])
{
	t_stack_node	*a;

	a = NULL;
	if (argc < 2)
		return (1);
	valid_input(argv + 1);
	a = init(argv + 1);
	//if (!a) (THIS IS NEEDED?)
	//	return (1);
	//printf("%f", disorder_index(&a));
	print_stack(&a);
	swap_a(&a);
	print_stack(&a);
	return (0);
}

t_stack_node	*init(char *argv[])
{
	t_stack_node	*a;
	size_t			i;
	char			**arg;
	char			**tmp;

	a = NULL;
	i = 0;
	arg = NULL;
	while (argv[i])
	{
		arg = ft_split(argv[i], ' ');
		tmp = arg;
		while (*tmp)
		{
			create_stack(&a, ft_atoi_ps(*tmp, &a));
			tmp++;
		}
		free_matrix(arg);
		i++;
	}
	return (a);
}

int	valid_input(char *argv[])
{
	size_t	i;
	size_t	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) || argv[i][j] == ' ')
				j++;
			else if (is_sign(&argv[i][j])
				&& (j == 0 || argv[i][j - 1] == ' ')
				&& ft_isdigit(argv[i][j + 1]))
				j++;
			else
				show_error(NULL);
		}
		i++;
	}

	return (1);
}

int	is_sign(char *argv)
{
	return (argv[0] == '+' || argv[0] == '-');
}
