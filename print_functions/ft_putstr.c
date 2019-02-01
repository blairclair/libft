/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:20:50 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 18:41:41 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*A string printing function that uses the write system call*/

#include "../includes/libft.h"

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s) * sizeof(char));
}
