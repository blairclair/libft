/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 19:35:41 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:47:14 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Returns 1 if c is printable and 0 if it is not.
*/

int	ft_isprint(int c)
{
	if (c >= (char)32 && c <= (char)126)
		return (1);
	return (0);
}
