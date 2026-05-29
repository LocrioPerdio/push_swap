/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:59:28 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/29 17:26:18 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack_node
{
	int				value;
	int				index;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;

}					t_stack_node;





/*Create stack*/

void	create_stack(t_stack_node **a, int n);
t_stack_node	*new_node(int value);
void			add_node_back(t_stack_node **a, t_stack_node *new);

/*Errors and free*/

void	show_error(t_stack_node **stack);
int	check_dup(t_stack_node *stack, int n);
void	free_stack(t_stack_node **stack);
void free_matrix(char **matrix);

#endif