/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:06:32 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/12 15:45:23 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*
int main(void)
{
	printf("%d \n", ft_isdigit('a'));
	printf("%d \n", isdigit('a'));
	printf("%d \n", ft_isdigit('8'));
	printf("%d \n", isdigit('8'));
	return (0);
}
*/
