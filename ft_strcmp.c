/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:51:49 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 17:49:38 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				num;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	if (*ss1 == '\0' && *ss2 != '\0')
		return (0 - *ss2);
	if (*ss1 != '\0' && *ss2 == '\0')
		return (*ss1);
	while (*ss1 != '\0' && *ss2 != '\0')
	{
		if (*ss1 != *ss2)
		{
			if (*ss1 != '\0' && *ss2 != '\0')
				return (*ss1 - *ss2);
		}
		ss1 = ss1 + 1;
		ss2 = ss2 + 1;
	}
	if (*ss1 == '\0' && *ss2 != '\0')
		return (0 - *ss2);
	return (0);
}
