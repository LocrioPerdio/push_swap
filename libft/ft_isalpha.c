/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:47:08 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/12 15:44:51 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

/*
int	main(void)
{
	printf("%d \n", ft_isalpha('a'));
	printf("%d \n", isalpha('a'));
	printf("%d \n", ft_isalpha('7'));
	printf("%d \n", isalpha('7'));
	return (0);
}
*/
