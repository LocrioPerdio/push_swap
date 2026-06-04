/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:21:24 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/12 14:45:43 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if ((size != 0 && nmemb > SIZE_MAX / size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (size * nmemb));
	return (ptr);
}
/*
int	main(void)
{
	size_t	*ptr;
	size_t	*tmp;
	int		i;

	ptr = ft_calloc(8, sizeof(size_t));
	if (!ptr)
		return (1);
	tmp = ptr;
	i = 0;
	while (i < 8)
	{
		if (tmp[i] == 0)
			write(1, "ok\n", 3);
		i++;
	}
	free(ptr);
	return (0);
}
*/