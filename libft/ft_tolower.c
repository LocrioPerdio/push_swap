/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:05:08 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/12 19:09:07 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 65 && c <= 90))
		return (c + 32);
	return (c);
}
/*
int main(void)
{
    printf("%c \n", ft_tolower('a'));
    printf("%c \n", tolower('a'));
    printf("%c \n", ft_tolower('B'));
    printf("%c \n", tolower('B'));
    printf("%c \n", ft_tolower('0'));
    printf("%c \n", tolower('0'));
    printf("%c \n", ft_tolower('♀'));
    printf("%c \n", tolower('♀'));
    printf("%c \n", ft_tolower(' '));
    printf("%c \n", tolower(' '));
    return (0);
}
*/