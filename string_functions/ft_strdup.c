/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 18:25:25 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:44:29 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Returns a duplicate of s1.
*/

char	*ft_strdup(const char *s1)
{
	char	*str;

	if ((str = (char*)ft_memalloc(ft_strlen(s1) + 1)) == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
