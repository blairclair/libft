/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 10:39:25 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/17 14:27:12 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Checks if a string is NULL and then frees it and sets the pointer to NULL.
*/

void	ft_strdel(char **str)
{
	if (str != NULL)
	{
		free(*str);
		*str = NULL;
	}
}
