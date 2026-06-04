/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:53:11 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/04 15:02:27 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		return (c - 32);
	return (c);
}
/*
int main(void)
{
    printf("%c \n", ft_toupper('a'));
    printf("%c \n", toupper('a'));
    printf("%c \n", ft_toupper('B'));
    printf("%c \n", toupper('B'));
    printf("%c \n", ft_toupper('0'));
    printf("%c \n", toupper('0'));
    printf("%c \n", ft_toupper('♀'));
    printf("%c \n", toupper('♀'));
    printf("%c \n", ft_toupper(' '));
    printf("%c \n", toupper(' '));
    return (0);
}
*/