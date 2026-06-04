/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 14:18:05 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/05 11:45:15 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
 {
  const char s1[] = "Hola compi!";
  printf("%p \n", ft_memchr(s1, 'm', 3));
  printf("%p \n", memchr(s1, 'm', 3));
  printf("%p \n", ft_memchr(s1, 'm', 8));
  printf("%p \n", memchr(s1, 'm', 8));
  printf("%p \n", ft_memchr(s1, 'm', 0));
  printf("%p \n", memchr(s1, 'm', 0));
  printf("%p \n", ft_memchr("", 'm', 3));
  printf("%p \n", memchr("", 'm', 3));
  printf("%p \n", ft_memchr(s1, '\0', 30));
  printf("%p \n", memchr(s1, '\0', 30));
  return (0);
}
*/