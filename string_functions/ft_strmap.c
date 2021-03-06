/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 18:45:00 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 15:23:53 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Applies the function f to each character of the string given
as argument to create and allocate a new string 
resulting from the successive applications of f
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*s1;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(s1 = ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		s1[i] = (*f)(s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
