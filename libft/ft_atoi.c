/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:40:07 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/26 16:02:53 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (sign * res);
}
/*
int main(void)
{
  printf("%d \n", ft_atoi("     -+-+--34242fef2qa31  "));
  printf("%d \n \n", atoi("     -+-+--34242fef2qa31  "));
   printf("%d \n", ft_atoi("     -34242fef2qa31  "));
  printf("%d \n \n", atoi("     -34242fef2qa31  "));
  return(0);

}
*/