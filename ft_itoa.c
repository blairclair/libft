/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:22:50 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 19:23:57 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*get_str(int n)
{
	int		i;
	int		k;
	char	*str;
	int		check;

	k = 0;
	check = 0;
	i = get_len(n);
	if (n < 0)
	{
		n = n * -1;
		check = 1;
	}
	if ((str = (char*)malloc(sizeof(char) * (i + 2))) == NULL)	
		return (NULL);
	while (n > 0)
	{
		str[k++] = (n % 10) + '0';
		n = n / 10;
	}
	if (check == 1)
		str[k++] = '-';
	k--;
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		j;
	char	*str1;
	int		k;

	j = 0;
	k = get_len(n) - 1;
	str = get_str(n);
	if ((str1 = (char*)malloc(sizeof(char) * (k + 2))) == NULL)	
		return (NULL);
	if (n == 0 || n == -0)
	{
		str1[0] = '0';
		str1[1] = '\0';
		j = 1;
	}
	if (n < -2147483647)
	{
		str1 = malloc(11);
		ft_strcpy(str1, "-2147483648");
		return (str1);
	}
	while (k >= 0)
		str1[j++] = str[k--];
	str1[j] = '\0';
	return (str1);
}
