/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:28:44 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/05 11:05:54 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (i < (n - 1))
		&& (unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(void)
 {
  const char s1[] = "HOLA COMPI!";
  const char s2[] = "HOLA C0MPI!";
  const char s3[] = "HOLA COMPI!";
  printf("%d \n", ft_strncmp(s1, s2, 2));
  printf("%d \n", strncmp(s1, s2, 2));
  printf("%d \n", ft_strncmp(s1, s2, 8));
  printf("%d \n", strncmp(s1, s2, 8));
  printf("%d \n", ft_strncmp(s2, s1, 8));
  printf("%d \n", strncmp(s2, s1, 8));
  printf("%d \n", ft_strncmp(s1, s3, 8));
  printf("%d \n", strncmp(s1, s3, 8));
  printf("%d \n", ft_strncmp("", s3, 8));
  printf("%d \n", strncmp("", s3, 8));
  printf("%d \n", ft_strncmp("", "", 8));
  printf("%d \n", strncmp("", "", 8));
  return 0;
}
*/