/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 15:16:41 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:44:21 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*A character printing function that uses the write system cal
and takes as a parameter, the file decriptor to write to*/

#include "../includes/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	b;

	b = (unsigned char)c;
	write(fd, &b, 1);
}
