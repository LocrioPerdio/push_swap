/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 22:33:31 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/05 14:21:13 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	count;
	size_t	s_len;

	count = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len || len == 0)
		return (ft_strdup(""));
	if (len > (s_len - start))
		len = (s_len - start);
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (count < len)
	{
		sub[count] = s[start + count];
		count++;
	}
	sub[count] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char const s[] = "Hola compi, hola!";
	printf("Antes de ft_substr: %s \n", s);
	printf("Después de ft_substr: %s \n", ft_substr(s, 5, 30));
	return (0);
}*/
