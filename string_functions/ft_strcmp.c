/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:51:49 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/22 15:22:30 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Compares two string and returns 0 if they are the same,
otherwise it returns the integer difference
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (*str1 != '\0' || *str2 != '\0')
	{
		if (*str1 == *str2)
		{
			str1 = str1 + 1;
			str2 = str2 + 1;
		}
		else
			return (*str1 - *str2);
	}
	return (0);
}
