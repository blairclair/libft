/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:25:37 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 19:42:26 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Allocates and returns a string of a certain size.
*/

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char*)ft_memalloc(size + 1)))
		return (NULL);
	while (str[i])
	{
		str[i] = 0;
		i++;
	}
	str[i] = '\0';
	return (str);
}
