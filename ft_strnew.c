/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:25:37 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 19:42:26 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	str = (char*)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		str[i] = 0;
		i++;
	}
	str[i] = '\0';
	return (str);
}
