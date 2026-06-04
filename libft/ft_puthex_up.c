/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 21:53:11 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/25 11:42:16 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_up(unsigned int n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEFGH";
	if (n >= 16)
	{
		count += ft_puthex_up(n / 16);
		n = n % 16;
	}
	count += ft_putchar(base[n % 16]);
	return (count);
}
