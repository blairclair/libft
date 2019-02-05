/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 15:31:03 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:46:47 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Writes an integer to the file descriptor passed in.
*/

#include "../includes/libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	int i;
	int intArray[10];
	int	isNegative;

	isNegative = 0;
	i = 0;
	if (num == 0)
		ft_putchar_fd('0', fd);
	if (num < -2147483647)
		ft_putstr_fd("-2147483648", fd);
	if (num < 0 && num != -2147483648)
	{
		num = num * -1;
		isNegative = 1;
	}
	while (num > 0 && num != -2147483648)
	{
		intArray[i] = num % 10;
		num = num / 10;
		i++;
	}
	if (isNegative == 1)
		ft_putchar_fd('-', fd);
	while (--i >= 0 && num != -2147483648)
		ft_putchar_fd('0' + intArray[i], fd);
}
