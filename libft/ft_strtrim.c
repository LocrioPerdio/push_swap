/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:59:08 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/08 10:29:01 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1);
	len = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	trimmed = malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_memmove(trimmed, s1 + start, len);
	trimmed[len] = '\0';
	return (trimmed);
}

/*
int main(void)
{ 
  char s[] = "aaabbaaababababababaHolaba abCompiababababababbbbaaaba";
  printf("%s \n", ft_strtrim(s, "ab"));
  return 0;
}
*/
