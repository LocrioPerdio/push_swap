/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:54:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/28 17:57:40 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/*
1. recibo argumento tipo "1 2 3"
2. compruebo que solo sean caracteres validos
3. argv = split
4. argv[i] = atoll(argv[i])
5. check_dup(argv)

PREGUNTAR:
- Esto debería ser una entrada valida? "-3     2    1" 4 7 "5 6"??
*/

int				is_sign(char *argv);
t_stack_node	*init(char *argv[]);
int				valid_input(char *argv[]);
void	show_error(void);

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
	a = NULL;
	arg = NULL;
	valid_input(argv);
	while (argv[i])
	{
		arg = ft_split(argv[i], ' ');
		while (*arg)
		{
			n = atoi(*arg);
			if (n > INT_MAX || n < INT_MIN)
				show_error;
			arg++;
			//create_node(n);
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
				show_error;
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
int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	size_t			i;

	//t_stack_node	*b; //declarar cuando hagamos el algoritmo
	//b = NULL;
	i = 1;
	if (argc < 2)
		return (1); // exit?
	a = init(argv + 1); // validar
		//recorrer argv1 y comprobar que solo haya espacios, digitos, '-', '+'.
	//que + y
		- tengan justo detras un numero y sea o el primer caracter de la cadena o delante tenga espacio
	else if (argc == 2)
			argv = ft_split_argv(argv[1], ' ');
	if (check_errors(argv) || check_dup(argv))
		return(2);
	while(argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return(0);
}
	*/
