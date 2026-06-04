/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 16:15:39 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/10 15:25:49 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && ((i + j) < len) && (big[i + j] == little[j]))
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
  const char s1[] = "HOLA COMPI!";
  const char s2[] = "COMPI!";
  const char s3[] = "jojojo!";

  printf("%s \n", ft_strnstr(s1, s2, 3));
  printf("%s \n", ft_strnstr(s1, s2, 13));
  printf("%s \n", ft_strnstr(s1, s3, 13));
  printf("%s \n", ft_strnstr(s1, s2, 0));
  printf("%s \n", ft_strnstr("", s2, 3));
  printf("%s \n", ft_strnstr("", "", 3));
  printf("%s \n", ft_strnstr(s1, "", 3));
  return (0);
}
*/