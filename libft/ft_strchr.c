/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 13:10:01 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/07 08:42:23 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*

int main(void)
 {
  const char s[] = "Hola compi!";
  printf("%p \n", ft_strchr(s, '\0'));
  printf("%p \n", strchr(s, '\0'));
  printf("%p \n", ft_strchr(s, 'B'));
  printf("%p \n", strchr(s, 'B'));
  printf("%p \n", ft_strchr(s, 'o'));
  printf("%p \n", strchr(s, 'o'));
  printf("%p \n", ft_strchr("", 'o'));
  printf("%p \n", strchr("", 'o'));
  printf("%p \n", ft_strchr(s, ' '));
  printf("%p \n", strchr(s, ' '));
  return 0;
}
*/