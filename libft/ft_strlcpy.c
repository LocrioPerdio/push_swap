/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 11:27:46 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/12 15:20:02 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(src);
	if (size == 0)
		return (s_len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s_len);
}
/*
int main(void)
{
    char src[] = "holi!";
    char dest[20];
    char dest2[20];
    ft_strlcpy(dest, src, 2);
    strlcpy(dest2, src, 2);
    printf("%s \n", dest);
    printf("%s \n", dest2);
    return (0);
}
*/