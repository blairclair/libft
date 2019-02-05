/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:08:06 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 18:29:27 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*takes a string and sets all of its elements up to n as 0*/

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*zer;
	size_t	i;

	i = 0;
	zer = (char*)s;
	while (i < n)
	{
		*zer = 0;
		zer = zer + 1;
		i++;
	}
}
