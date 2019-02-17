/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 18:05:21 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:45:50 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Writes an integer to stdout
*/

#include "../includes/libft.h"

void	ft_putnbr(int num)
{
	int i;
	int intArray[13];
	int	isNegative;

	isNegative = 0;
	i = 0;
	if (num == 0)
		ft_putchar('0');
	if (num < -2147483647)
		ft_putstr("-2147483648");
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
		ft_putchar('-');
	while (--i >= 0 && num != -2147483648)
		ft_putchar('0' + intArray[i]);
}
