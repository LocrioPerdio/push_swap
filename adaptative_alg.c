#include "push_swap.h"

void	choose_alg(t_stack_node **a, t_stack_node **b)
{
	float	d_index;

	d_index = disorder_index(a);
	if (d_index < 0.2)
	{
		selection_sort(a, b);
		//printf("selection");
	}
	else if (d_index >= 0.2 && d_index < 0.5)
	{
		chunk_sort(a, b);
		//printf("chunk");
	}
	else if (d_index >= 0.5)
	{
		radix_sort(a, b);
		//printf("radix");
	}
}
