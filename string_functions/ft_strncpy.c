/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:39:17 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 15:17:27 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char			*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	len_dst;
	size_t	i;

	i = 0;
	len_dst = ft_strlen(dst);
	while (src[i] && i < len)
		dst[len_dst++] = src[i++];
	dst[len_dst] = '\0';
	return (dst);
}

#include <assert.h>
#include <stdio.h>
int main()
{
	char	buf[6];
	char	buf2[6];

	bzero(buf, strlen(buf));
	bzero(buf2, strlen(buf2));
	ft_strncpy(buf, "abc", 6);
	ft_strncpy(buf2, "abc", 6);	
	printf("my buf: %s\n", buf);
	printf("their buf: %s\n", buf2);

}