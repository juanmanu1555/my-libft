/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:09:54 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/29 20:45:52 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t count;
	size_t count2;
	size_t count3;
	size_t count4;

	count = ft_strlen(dst);
	count2 = 0;
	count3 = ft_strlen(src);
	count4 = 0;
	count4 = count;
	if (!dst || !src)
		return (count + count3);
	if (dstsize == 0 || dstsize < count)
		return (dstsize + count3);
	while (src[count2] && count < dstsize - 1)
	{
		dst[count] = src[count2];
		count2++;
		count++;
	}
	dst[count] = '\0';
	return (count4 + count3);
}
