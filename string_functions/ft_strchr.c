/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 12:41:08 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 15:17:44 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Locates the first instance of c in string s and returns a pointer to it.
*/

char	*ft_strchr(const char *s, int c)
{
	char	c_char;
	size_t	len;

	len = ft_strlen(s);
	c_char = (char)c;
	if (c_char == '\0')
		return ((char*)s + len);
	while (*s)
	{
		if (*s++ == c_char)
			return (char*)s - 1;
	}
	return (NULL);
}
