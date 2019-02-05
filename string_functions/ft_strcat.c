/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:53:17 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:49:19 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Concatonates the string s2 to the back of s1.
*/

char	*ft_strcat(char *restrict str1, const char *restrict str2)
{
	int	i;
	int	j;

	j = 0;
	if (str1)
		i = ft_strlen(str1);
	else
		i = 0;
	while (str2[j])
		str1[i++] = str2[j++];
	str1[i] = '\0';
	return (str1);
}
