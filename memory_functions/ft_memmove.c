/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:39:32 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:42:23 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Copies len bytes from string src to string dst while supporting
the overlap
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;

	cdst = (char*)dst;
	csrc = (char*)src;
	if (csrc < cdst && csrc + (len - 1) > cdst)
	{
		csrc = csrc + (len - 1);
		cdst = cdst + (len - 1);
		while (len > 0)
		{
			*cdst-- = *csrc--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*cdst++ = *csrc++;
			len--;
		}
	}
	return (dst);
}
