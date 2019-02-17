/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 10:23:42 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/22 15:22:24 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
/*
Takes a string and a delimiter and returns an array of fresh strings
split by the delimiter
*/
static int		get_word_count(char const *s, char c)
{
	int num_words;
	int	i;

	num_words = 0;
	i = 0;
	while (s[i++])
	{
		if (s[i] == c)
			num_words++;
	}
	return (num_words);
}

static int		largest_word(const char *s, char c)
{
	int i;
	int	j;
	int largest;

	j = 0;
	largest = 0;
	while (s[j++])
	{
		if (s[j] == c)
		{
			if (i > largest)
				largest = i;
			i = 0;
		}
		i++;
	}
	return (largest);
}

static char		**split_strings(int i, char **st_arr, const char *s, char c)
{
	int	let;
	int	word;

	word = 0;
	let = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			st_arr[word][let] = '\0';
			let = -1;
			word++;
		}
		else
			st_arr[word][let] = s[i];
		i++;
		let++;
	}
	return (st_arr);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**st_arr;
	int		i;
	int		j;
	int		words;
	int		largest;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	words = get_word_count(s, c) + 1;
	largest = largest_word(s, c) + 1;
	if ((st_arr = (char **)ft_memalloc(sizeof(char*) * words)) == NULL)
		return (NULL);
	while (j < words)
	{
		if ((st_arr[j] = (char*)ft_memalloc(sizeof(char*) * largest))== NULL)
			return (NULL);
		j++;
	}
	st_arr[j] = NULL;
	st_arr = split_strings(i, st_arr, s, c);
	return (st_arr);
}
