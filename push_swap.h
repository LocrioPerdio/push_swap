/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:59:28 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/29 10:40:32 by paduarte         ###   ########.fr       */
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

int		check_dup(char *argv[]);
void	show_error(void);

/*Lists*/

t_stack_node	*new_node(void *content);

#endif