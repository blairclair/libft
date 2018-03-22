/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 09:58:44 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 18:06:37 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int				num;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	num = 0;
	while ((*ss1 != '\0' || *ss2 != '\0') && num < n)
	{
		if (*ss1 == *ss2)
		{
			ss1 = ss1 + 1;
			ss2 = ss2 + 1;
		}
		else
				return (*ss1 - *ss2);
		num++;
	}
	return (0);
}
