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
Compares two string and returns 0 if they are the same, otherwise it
returns the integer difference.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	while (*ss1 != '\0' || *ss2 != '\0')
	{
		if (*ss1 == *ss2)
		{
			ss1 = ss1 + 1;
			ss2 = ss2 + 1;
		}
		else
			return (*ss1 - *ss2);
	}
	return (0);
}
