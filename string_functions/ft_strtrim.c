/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ststrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:47:31 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 19:31:31 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Takes a string and returns a copy without whitespace at the begining
and end.
*/

static int		is_whitespace(char ws)
{
	if (ws == ' ' || ws == ',' || ws == '\n' || ws == '\t')
		return (1);
	return (0);
}

static int		is_more_whitespace(char const *c, int i)
{
	while (c[i])
	{
		if (!is_whitespace(c[i]))
			return (1);
		i++;
	}
	return (0);
}

static char		*get_sws(const char *s, char *sws, int i, int check)
{
	i = 0;
	if ((sws = (char*)malloc((ft_strlen(s) / 2 - check))) == NULL)
		return (NULL);
	while (s[i])
	{
		if (!is_whitespace(s[i]))
			sws[check++] = s[i++];
		else if (is_whitespace(s[i]) && !is_whitespace(s[i - 1]) && i != 0)
		{
			if (!is_more_whitespace(s, i))
			{
				while (is_whitespace(s[i]))
					sws[check++] = s[i++];
			}
			else
			{
				sws[check] = '\0';
				break ;
			}
		}
		else if (is_whitespace(s[i]))
			i++;
	}
	sws[check] = '\0';
	return (sws);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	char	*sws;
	int		check;

	check = 0;
	if (s == NULL ||
	(sws = (char*)ft_memalloc((ft_strlen(s) / 2 - check))) == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (i != 0 && is_whitespace(s[i]) && !is_whitespace(s[i - 1]))
		{
			if (!is_more_whitespace(s, i))
			{
				while (is_whitespace(s[i]))
					i++;
			}
		}
		else if (is_whitespace(s[i]))
			check++;
		i++;
	}
	check = 0;
	sws = get_sws(s, sws, i, check);
	return (sws);
}


#include <stdio.h>

int main()
{
	printf("%s", ft_strtrim("   hithere "));
}