/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:44:18 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:49:28 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
A more protected version of strncat.
*/

size_t	ft_strlcat(char *restrict s1, const char *restrict s2, size_t dstsize)
{
	int	len_s1;
	int	i;

	len_s1 = ft_strlen(s1);
	i = 0;
	while (s2[i] && i < (dstsize - len_s1 - 1))
		s1[len_s1++] = s2[i++];
	return (ft_strlen(s1));
}
