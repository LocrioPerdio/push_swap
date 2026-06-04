/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:50:59 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/07 20:24:09 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
/*
int main(void) 
{
  char s1[] = "hola";
  char s2[] = " compi!";
  char *join;
  
   join = ft_strjoin(s1,s2);
   printf("Original 1: %s \n", s1);
   printf("Original 2: %s \n", s2);
   printf("Unión: %s \n", join);
   free(join);
   return(0);
}
*/