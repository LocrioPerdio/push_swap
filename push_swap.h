/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:59:28 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/12 16:05:12 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack_node
{
	int					value;
	size_t				index;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;
}						t_stack_node;

typedef struct s_stats
{
	int					bench;
	float				disorder;
	size_t				total;
	size_t				sa;
	size_t				sb;
	size_t				ss;
	size_t				pa;
	size_t				pb;
	size_t				ra;
	size_t				rb;
	size_t				rr;
	size_t				rra;
	size_t				rrb;
	size_t				rrr;
	char				*algorithm;
	char				*complexity;
}						t_stats;

/* Handle stack */

int						create_stack(t_stack_node **a, int n);
void					add_node_front(t_stack_node **a, t_stack_node *new);
void					assign_index(t_stack_node *a);

/* Errors and free */

void					show_error(t_stack_node **stack, char **arg);
int						check_dup(t_stack_node *stack, int n);
void					free_stack(t_stack_node **stack);
void					free_matrix(char **matrix);

/* Utils */

int						ft_atoi_ps(const char *nptr, t_stack_node **a,
							char **arg);
int						stack_size(t_stack_node *a);
float					disorder_index(t_stack_node **a);
t_stack_node			*find_last(t_stack_node *lst);

/* Swap operations */

void					swap_a(t_stack_node **a, t_stats *stats);
void					swap_b(t_stack_node **b, t_stats *stats);
void					swap_ss(t_stack_node **a, t_stack_node **b,
							t_stats *stats);

/* Push operations */

void					push_a(t_stack_node **a, t_stack_node **b,
							t_stats *stats);
void					push_b(t_stack_node **a, t_stack_node **b,
							t_stats *stats);

/* Rotate operations */

void					rotate_a(t_stack_node **a, t_stats *stats);
void					rotate_b(t_stack_node **b, t_stats *stats);
void					rotate_rr(t_stack_node **a, t_stack_node **b,
							t_stats *stats);

/* Reverse rotate operations */

void					reverse_rotate_a(t_stack_node **a, t_stats *stats);
void					reverse_rotate_b(t_stack_node **b, t_stats *stats);
void					reverse_rotate_rr(t_stack_node **a, t_stack_node **b,
							t_stats *stats);

/* Algorithms */

void					selection_sort(t_stack_node **a, t_stack_node **b);
void					chunk_sort(t_stack_node **a, t_stack_node **b);
void					radix_sort(t_stack_node **a, t_stack_node **b);
int						choose_alg(t_stack_node **a, t_stack_node **b);

/* Benchmark */

#endif