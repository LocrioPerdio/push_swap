#include "push_swap.h"

void	print_stack(t_stack_node **a)
{
	t_stack_node	*tmp;

	tmp = *a;
	while (tmp)
	{
		ft_printf("%d ", tmp->value);
		tmp = tmp->next;
	}
    ft_printf("\n");
}
