/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 12:27:28 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/25 11:43:26 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_format(va_list args, char c);

int	ft_printf(char const *s, ...)
{
	va_list	args;
	size_t	i;
	int		res;

	va_start(args, s);
	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == '%' && (s[i + 1] != '\0'))
			res += ft_format(args, s[++i]);
		else
			res += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (res);
}

static int	ft_format(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(args, int));
	else if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (c == 'u')
		count = ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_puthex_low(va_arg(args, unsigned int));
	else if (c == 'X')
		count = ft_puthex_up(va_arg(args, unsigned int));
	else if (c == 'p')
		count = ft_putadress(va_arg(args, unsigned long));
	else if (c == '%')
		count = ft_putchar('%');
	return (count);
}
/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int z = 46465168;
	char *w = NULL;
	//int x = ft_printf("%X\n", INT_MAX);
	int *y = &z;
	// printf("%X\n", INT_MAX);
    int a = ft_printf("%p\n", w);
    int b = printf("%p\n", w);
	ft_printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}*/