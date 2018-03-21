/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:07:02 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 15:18:33 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_j(int i, int j, const char *haystack, const char *needle)
{
	int	num;
	int	k;

	num = 0;
	k = ft_strlen(needle);
	while (num < k)
	{
		if (haystack[i] == needle[j])
		{
			num++;
		}
		if (haystack[i] != needle[j])
		{
			i = i - num;
			j = j - num;
			num = 0;
			break ;
		}
	}
	return (j);
}

static int		get_i(int i, int j, const char *haystack, const char *needle)
{
	int	num;
	int	k;

	num = 0;
	k = ft_strlen(needle);
	while (num < k)
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			num++;
		}
		else
		{
			i = i - num;
			j = j - num;
			num = 0;
			break ;
		}
	}
	return (i);
}

static int		get_num(int i, int j, const char *haystack, const char *needle)
{
	int	num;
	int	k;

	k = ft_strlen(needle);
	num = 0;
	while (num < k)
	{
		if (haystack[i] == needle[j])
		{
			num++;
			i++;
			j++;
		}
		else
		{
			i = i - num;
			j = j - num;
			num = 0;
			break ;
		}
	}
	return (num);
}

static char		*is_needle(int i, const char *haystack,
							const char *needle, int num)
{
	int	j;
	int	k;

	j = 0;
	k = ft_strlen(needle);
	while (needle[j])
	{
		if (num == k)
			return ((char*)(haystack + (i - num)));
		if (haystack[i] == needle[j])
		{
			num = get_num(i, j, haystack, needle);
			i = get_i(i, j, haystack, needle);
			j = get_j(i, j, haystack, needle);
		}
		j++;
	}
	if (k == 1 && num == 1)
		return ((char*)(haystack + (i - num)));
	return (NULL);
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		num;
	int		j;
	int		k;

	num = 0;
	j = 0;
	i = 0;
	k = ft_strlen(needle);
	if (ft_strcmp(needle, "") == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		j = 0;
		if (is_needle(i, haystack, needle, num) != NULL)
		{
			haystack = is_needle(i, haystack, needle, num);
			return ((char*)haystack);
		}
		i++;
	}
	return (NULL);
}
