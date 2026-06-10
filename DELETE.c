#include "push_swap.h"

void	print_stack(t_stack_node **a)
{
	t_stack_node	*tmp;

	tmp = *a;
	ft_printf("stack: ");
	while (tmp)
	{
		ft_printf("%d ", tmp->value);
		tmp = tmp->next;
	}
    ft_printf("\n");
}

void print_index(t_stack_node **a)
{
	t_stack_node	*tmp;

	tmp = *a;
	ft_printf("index: ");
	while (tmp)
	{
		ft_printf("%d ", tmp->index);
		tmp = tmp->next;
	}
    ft_printf("\n");
}

// void print_pos(t_stack_node **a)
// {
// 	t_stack_node	*tmp;

// 	tmp = *a;
// 	ft_printf("pos: ");
// 	while (tmp)
// 	{
// 		ft_printf("%d ", tmp->pos);
// 		tmp = tmp->next;
// 	}
//     ft_printf("\n");
// }

void print_prev(t_stack_node **a)
{
	t_stack_node	*tmp;

	tmp = *a;
	ft_printf("prev: ");
	while (tmp)
	{
		ft_printf("%d ", tmp->prev);
		tmp = tmp->next;
	}
    ft_printf("\n");
}

void print_next(t_stack_node **a)
{
	t_stack_node	*tmp;

	tmp = *a;
	ft_printf("next: ");
	while (tmp)
	{
		ft_printf("%d ", tmp->next);
		tmp = tmp->next;
	}
    ft_printf("\n");
}
