/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 10:23:42 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:49:41 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_word_count(char const *s, char c)
{
	int	i;
	int	count;
	int	j;

	j = 0;
	i = 0;
	if (s[0] == c)
		count = 0;
	else
		count = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	return (count);
}

static int		is_c_all(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			j = 1;
		i++;
	}
	return (j);
}

static char		**hi(int i, char **st_arr, const char *s, char c)
{
	int	l;
	int	j;

	j = 0;
	while (s[i] && j < (get_word_count(s, c) - 1))
	{
		while (s[i] && s[i] == c)
			i++;
		st_arr[j] = malloc(sizeof(char) * (get_word_count(s, c) + 1));
		if (st_arr[j] == NULL)
			return (NULL);
		l = 0;
		while (s[i] && s[i] != c)
		{
			st_arr[j][l] = s[i];
			l++;
			i++;
		}
		if (s[i] != '\0')
			st_arr[j++][l] = '\0';
	}
	st_arr[j] = NULL;
	return (st_arr);
}

static char		**get_wc_2(int i, char **st_arr, const char *s, char c)
{
	int	l;
	int	j;

	j = 0;
	l = 0;
	st_arr[j] = (char *)malloc(sizeof(char) * (get_word_count(s, c) + 1));
	while (s[i] == c)
		i++;
	while (s[i])
	{
		st_arr[j][l] = s[i];
		l++;
		i++;
	}
	st_arr[j + 1] = NULL;
	return (st_arr);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**st_arr;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	l = 0;
	if (s == NULL)
		return (NULL);
	st_arr = (char **)malloc(sizeof(*st_arr) * (get_word_count(s, c)));
	if (is_c_all(s, c) == 0)
	{
		st_arr[j] = NULL;
		return (st_arr);
	}
	if (get_word_count(s, c) == 1)
	{
		st_arr = get_wc_2(i, st_arr, s, c);
		return (st_arr);
	}
	if (!st_arr)
		return (NULL);
	st_arr = hi(i, st_arr, s, c);
	return (st_arr);
}
