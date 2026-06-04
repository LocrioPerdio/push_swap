/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:09:48 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/04 14:21:17 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if ((!dest && !src) || n == 0)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char src[] = "holi!";
    char dest[20];
	char dest2[20];
    printf("%s \n", ft_memcpy(dest, src, 2));
	printf("%s \n", memcpy(dest2, src, 2));
    return (0);
}
*/