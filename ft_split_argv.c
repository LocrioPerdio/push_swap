/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:31:49 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/26 10:37:03 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char		**ft_newarr(char const *s, char c);
static size_t	ft_countw(const char *s, int c);
static char		*fill_word(const char *s, size_t start, size_t end);
static void		*ft_free(char **w_array, size_t count);

char	**ft_split_argv(char const *s, char c)
{
	char	**w_array;
	size_t	i;
	size_t	j;
	size_t	start;

	w_array = ft_newarr(s, c);
	if (!w_array)
		return (NULL);
	i = 0;
	j = 1;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		w_array[j++] = fill_word(s, start, i);
		if (!w_array[j - 1])
			return (ft_free(w_array, j));
	}
	w_array[j] = NULL;
	return (w_array);
}

static size_t	ft_countw(const char *s, int c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static char	*fill_word(const char *s, size_t start, size_t end)
{
	size_t	i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free(char **w_array, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(w_array[i]);
		i++;
	}
	free(w_array);
	return (NULL);
}

static char	**ft_newarr(char const *s, char c)
{
	char	**w_array;

	if (!s)
		return (NULL);
	w_array = malloc((ft_countw(s, c) + 2) * sizeof(char *));
	if (!w_array)
		return (NULL);
	w_array[0] = NULL;
	return (w_array);
}
/*
int main(void)
{

  char **splitted;
  int i;
  
  i = 0;
  splitted = ft_split("EstoaTieneaMuchasaVocalesa", 'a');
  while(splitted[i])
  {
    ft_putendl_fd(splitted[i], 1);
    i++;
  }    
  return(0);
}
*/