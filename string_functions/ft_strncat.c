/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:26:38 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/17 16:08:07 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Concatonates up to n characters of string s2 to the end of s1
*/

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int		len_s1;
	size_t	j;
	size_t	len_s2;

	j = 0;
	len_s1 = (s1) ? ft_strlen(s1) : 0;
	len_s2 = (s2) ? ft_strlen(s2) : 0;
	while (s2[j] && j < n)
		s1[len_s1++] = s2[j++];
	s1[len_s1] = '\0';
	return (s1);
}
