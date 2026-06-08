/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:54:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/08 21:51:38 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				is_sign(char c);
t_stack_node	*init(char *argv[]);
int				valid_input(char *argv[]);

//llamamos a "assign_index desde el main o desde el init???"
//TODO: implementar funcion para comprobar si el stack ya esta ordenado
// antes de llamar a algoritmo

int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	//static size_t	count;
	//t_stack_node	*b;

	a = NULL;
	//b = NULL;
	//count = 0;
	if (argc < 2)
		return (1);
	valid_input(argv + 1);
	a = init(argv + 1);
	if (!a) //(IS THIS NEEDED?)
		return (1);
	//printf("%f", disorder_index(&a));
	//print_stack(&a);
	//print_stack(&b);
	//print_index(&a);
	//print_pos(&a);
	// printf("max index a: %ld\n", get_max_index(&a));
	// printf("max index b: %ld\n", get_max_index(&b));
	// print_prev(&a);
	// print_next(&a);
	//reverse_rotate_a(&a);
	//push_b(&a, &b);
	//reverse_rotate_a(&a);
	// push_b(&a, &b);
	// printf("max index a: %ld\n", get_max_index(&a));
	// printf("max index b: %ld\n", get_max_index(&b));
	choose_alg(&a);
	//print_stack(&a);
	//print_stack(&b);
	// print_index(&a);
	// print_pos(&a);
	free_stack(&a);
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
	assign_index(a);
	assign_pos(a);
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
			else if (is_sign(argv[i][j])
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

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}
