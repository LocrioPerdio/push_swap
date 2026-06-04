/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:22:24 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/25 11:41:50 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_ad(unsigned long n);

int	ft_putadress(unsigned long n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	count += ft_puthex_ad(n);
	return (count);
}

int	ft_puthex_ad(unsigned long n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_puthex_ad(n / 16);
		n = n % 16;
	}
	count += ft_putchar(base[n % 16]);
	return (count);
}
