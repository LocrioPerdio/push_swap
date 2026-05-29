/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:54:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/29 10:43:10 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/*


PREGUNTAR:
- 
*/

int				is_sign(char *argv);
t_stack_node	*init(char *argv[]);
int				valid_input(char *argv[]);
void			show_error(void);

int	main(int argc, char *argv[])
{
	t_stack_node	*a;

	if (argc < 2)
		return (1);
	a = init(argv + 1);
	return (0);
}

t_stack_node	*init(char *argv[])
{
	t_stack_node	*a;
	size_t			i;
	char			**arg;
	long			n;

	i = 0;
	n = 0;
	arg = NULL;
	valid_input(argv);
	while (argv[i])
	{
		arg = ft_split(argv[i], ' ');
		while (*arg)
		{
			n = atoi(*arg);
			if (n > INT_MAX || n < INT_MIN)
				show_error(void);
			a = create_node(n);
			arg++;
		}
		i++;
	}
	return (a);
}

int	valid_input(char *argv[])
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (is_sign(&argv[i][0]) || (is_sign(&argv[i][j])
					&& ft_isdigit(argv[i][j + 1]) && argv[i][j - 1] == ' ')
				|| argv[i][j] == ' ' || ft_isdigit(argv[i][j]))
				j++;
			else
				show_error(void);
		}
		i++;
	}
	return (1);
}

int	is_sign(char *argv)
{
	return (argv[0] == '+' || argv[0] == '-');
}

/*

	*/
