/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:39:17 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 15:17:27 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Copies len number of characters of string src onto string dst.
*/

char			*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	len_dst;
	size_t	i;

	i = 0;
	len_dst = ft_strlen(dst);
	while (src[i] && i < len)
		dst[len_dst++] = src[i++];
	dst[len_dst] = '\0';
	return (dst);
}
