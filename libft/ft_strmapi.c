/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:09:59 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/07 20:16:32 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	i = 0;
	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
char to_upper(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return(c);
}

int main(void) 
{
  const char s[] = "hola compi!";
  char *mod;
  
  mod =ft_strmapi(s, to_upper);
   printf("Original: %s \n", s);
   
   printf("Modificada: %s \n", mod);
   free(mod);
   return(0);
}
*/