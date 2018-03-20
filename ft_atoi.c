/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 10:20:25 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:49:51 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	i_plus(char const *str, int i)
{
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[0] == '0')
	{
		while (str[i] == '0')
			i++;
	}
	return (i);
}

static int	if_not_num(char const *str, int i, int check)
{
	if (ft_isalpha(str[i]) == 1 || str[i] == ' ')
		check++;
	if (str[i] == '\r' || str[i] == '\t' ||
		str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		check++;
	return (check);
}

static int	get_num(char const *str, int num, int i, int check)
{
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i = if_not_num(str, i, i);
		num = num * 10 + (str[i] - 48);
		if (((long)num > 2147483647 && (long)num < 2147483649 && check == 1))
			return (-2147483648);
		i++;
	}
	if (check == 1)
		return (-num);
	else
		return (num);
}

static int	last_chance(const char *str, int i)
{
	i = 0;
	while (str[i] == '\r' || str[i] == '\t' ||
			str[i] == ' ' || str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		check;

	i = 0;
	num = 0;
	check = 0;
	while (str[i])
	{
		check = if_not_num(str, i, check);
		if (str[i] == '-')
			num++;
		i++;
	}
	if (ft_strlen(str) - check > 12 && num == 1 && str[0] != '0')
		return (0);
	if (ft_strlen(str) - check > 11 && num != 1 && str[0] != '0')
		return (-1);
	check = 0;
	i = last_chance(str, i);
	if (str[i] == '-')
		check = 1;
	i = i_plus(str, i);
	num = get_num(str, num, i, check);
	return (num);
}
