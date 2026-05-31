#include "push_swap.h"

void	print_stack(t_stack_node **a)
{
	while (*a)
	{
		ft_printf("%d ", (*a)->value);
		*a = (*a)->next;
	}
    ft_printf("\n");
}
