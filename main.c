/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:54:20 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/27 15:22:42 by paduarte         ###   ########.fr       */
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
*/



int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	//t_stack_node	*b; //declarar cuando hagamos el algoritmo
	size_t	i;


	//b = NULL;
	i = 1;

	if (argc < 2)
		return (1); // exit?
	a = init(argv + 1); // validar //recorrer argv1 y comprobar que solo haya espacios, digitos, '-', '+'. 
	//que + y - tengan justo detras un numero y sea o el primer caracter de la cadena o delante tenga espacio
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
