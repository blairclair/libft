/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 12:41:08 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:48:47 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_char;
	int		i;
	size_t	wha;

	wha = ft_strlen(s);
	c_char = (char)c;
	if (c_char == '\0')
		return ((char*)s + wha);
	while (*s)
	{
		if (*s++ == c_char)
		{
			return (char*)s - 1;
		}
	}
	return (NULL);
}
