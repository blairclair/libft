/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:02:26 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 15:25:44 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Returns a substring of s starting at the variable start and continuing
len long
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*s2;

	i = 0;
	j = 0;
	if (s == NULL || (s2 = (char*)ft_memalloc(len + 1)) == NULL)
		return (NULL);
	while (j < len)
		s2[j++] = s[start++];
	s2[j] = '\0';
	return (s2);
}
