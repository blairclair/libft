/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:28:13 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:46:57 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Calls the function f with one parameter on every character in string str.
*/

void	ft_striter(char *str, void (*f)(char *))
{
	int	i;

	i = 0;
	if (str != NULL && f != NULL)
	{
		while (str[i])
		{
			(*f)((char*)str + i);
			i++;
		}
	}
}
