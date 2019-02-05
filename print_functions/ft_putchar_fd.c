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

#include "../includes/libft.h"

/*
Uses the write system call to write a character to the file descriptor
passed in.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
