/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 10:33:18 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/05 14:28:55 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	i = 0;
	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (aux1[i] != aux2[i])
			return (aux1[i] - aux2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
  const char s1[] = "HOLA COMPI!";
  const char s2[] = "HOLA COMPI!";
  const char s3[] = "HOLA C0MPI!";
  printf("%d \n", ft_memcmp(s1, s2, 3));
  printf("%d \n \n", memcmp(s1, s2, 3));
  printf("%d \n", ft_memcmp(s1, s2, 0));
  printf("%d \n \n", memcmp(s1, s2, 0));
  printf("%d \n", ft_memcmp(s1, s2, 10));
  printf("%d \n \n", memcmp(s1, s2, 10));
  printf("%d \n", ft_memcmp(s1, s3, 10));
  printf("%d \n \n", memcmp(s1, s3, 10));
  printf("%d \n", ft_memcmp(s1, s2, 30));
  printf("%d \n \n", memcmp(s1, s2, 30));
  printf("%d \n", ft_memcmp("", s2, 3));
  printf("%d \n \n", memcmp("", s2, 3));
  printf("%d \n", ft_memcmp("", "", 3));
  printf("%d \n", memcmp("", "", 3));
  return (0);
}
*/