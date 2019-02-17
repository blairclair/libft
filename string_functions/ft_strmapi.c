/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 19:10:06 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 15:54:31 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Applies the function f to each character of the string passed
as argument by giving its index as first argument to create and allocate a
new string resulting from the successive applications of f
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s1;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if ((s1 = ft_memalloc(ft_strlen(s) + 1)) == NULL)
		return (NULL);
	while (s[i])
	{
		s1[i] = (*f)(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
