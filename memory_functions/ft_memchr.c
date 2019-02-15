/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 15:46:20 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:46:30 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Takes a string and returns a pointer to the first instance of c within
n bytes. If no such instance exists, then NULL is returned.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sp;
	size_t	i;

	i = 0;
	sp = (char*)s;
	while (i < n)
	{
		if (*sp++ == (char)c)
		{
			sp = sp - 1;
			return (sp);
		}
		i++;
	}
	return (NULL);
}
