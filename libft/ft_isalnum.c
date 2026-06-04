/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:12:24 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/10 15:31:29 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main(void)
{
	printf("%d \n", ft_isalnum('a'));
	printf("%d \n", isalnum('a'));
	printf("%d \n", ft_isalnum('\b'));
	printf("%d \n", isalnum('\b'));
	return (0);
}
*/