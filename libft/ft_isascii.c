/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:46:03 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/12 15:44:04 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main(void)
{
	printf("%d \n", ft_isascii('a'));
	printf("%d \n", isascii('a'));
	printf("%d \n", ft_isascii('♫'));
	printf("%d \n", isascii('♫'));
	return (0);
}
*/
