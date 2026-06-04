/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 10:51:33 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/05 11:04:35 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
  const char s[] = "Hola compi!";
  printf("%p \n", ft_strrchr(s, '\0'));
  printf("%p \n", strrchr(s, '\0'));
  printf("%p \n", ft_strrchr(s, 'B'));
  printf("%p \n", strrchr(s, 'B'));
  printf("%p \n", ft_strrchr(s, 'o'));
  printf("%p \n", strrchr(s, 'o'));
  printf("%p \n", ft_strrchr("", 'o'));
  printf("%p \n", strrchr("", 'o'));
  printf("%p \n", ft_strrchr(s, ' '));
  printf("%p \n", strrchr(s, ' '));
  return 0;
}
*/