/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 11:49:26 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:45:58 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Compares s1 and s2 returning 1 if they are the same and 0 if not
*/

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i] || s2[i])
		{
			if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
				return (0);
			i++;
		}
	}
	return (1);
}
