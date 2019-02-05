/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 20:01:29 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/17 14:26:12 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
If c is an uppercase letter then it returns the lowercase version.
Otherwise it returns itself.
*/ 

int	ft_tolower(int c)
{
	if (c >= (char)65 && c <= (char)90)
		return (c + 32);
	return (c);
}
