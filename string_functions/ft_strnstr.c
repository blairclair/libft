/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 09:39:08 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 18:20:26 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Locates the first occurence of the string need in the string haystack 
within len amount of characters and returns a pointer to it. If not
occurence is found then NULL is returned
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l2;
	char	*h2;
	char	*n2;

	if (*needle == '\0')
		return ((void *)haystack);
	while (len && *haystack)
	{
		if (*haystack == *needle)
		{
			l2 = len;
			h2 = (void *)haystack + 1;
			n2 = (void *)needle + 1;
			while (l2-- > 0 && *h2 != '\0' && *n2 != '\0' && *h2 == *n2)
			{
				h2 = h2 + 1;
				n2 = n2 + 1;
			}
			if (*n2 == '\0')
				return ((void *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
