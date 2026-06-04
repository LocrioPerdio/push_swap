/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 16:00:05 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/04 14:41:40 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)

{
	size_t	i;
	size_t	j;
	size_t	s_len;
	size_t	d_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	i = d_len;
	j = 0;
	if (size == 0)
		return (s_len);
	if (size < d_len)
		return (size + s_len);
	while (src[j] && (d_len + j) < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}
/*
int main(void)
{
    char src[20] = "mundo!";
    char dest[20]= "Hola ";
    char dest2[20]= "Hola ";
    ft_strlcat(dest, src, 15);
    strlcat(dest2, src, 15);
    printf("%s \n", dest);
    printf("%s \n", dest2);
    return (0);
}

*/