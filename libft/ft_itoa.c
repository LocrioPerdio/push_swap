/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:47:49 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/07 10:20:03 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int		count;
	long	ln;

	count = 0;
	ln = n;
	if (ln < 0)
	{
		count++;
		ln = ln * (-1);
	}
	while (ln > 9)
	{
		ln = ln / 10;
		count++;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		len;
	long	ln;

	len = (ft_numlen(n));
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = len - 1;
	ln = n;
	if (ln < 0)
	{
		ln = ln * (-1);
		res[0] = '-';
	}
	while (ln > 9)
	{
		res[i] = ln % 10 + 48;
		ln = ln / 10;
		i--;
	}
	res[i] = ln + 48;
	res[len] = '\0';
	return (res);
}

/*
int main(void)
{   
    char *res = ft_itoa(-4874578);
    printf("%s", res);
    free(res);
    return (0);
}
*/