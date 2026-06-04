/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:47:41 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/14 13:53:02 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		count += ft_putchar(nb + 48);
	return (count);
}
