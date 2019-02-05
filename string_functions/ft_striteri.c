/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 17:20:55 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:47:36 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Calls the function f with two parameters on every character in string str.
*/

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (str != NULL && f != NULL)
	{
		while (str[i])
		{
			(*f)(i, (char*)str + i);
			i++;
		}
	}
}
