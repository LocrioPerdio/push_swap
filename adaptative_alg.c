#include "push_swap.h"

void	choose_alg(t_stack_node **a)
{
	float	d_index;

	d_index = disorder_index(a);
	if (d_index < 0.2)
		//simple_sort(a);
        printf("casi ordenado");
	else if (d_index >= 0.2 && d_index < 0.5)
		{
			chunk_sort(a);
			printf("chunk");
		}
	else if (d_index >= 0.5)
		{
			radix_sort(a);
			printf("radix");
		}
}
