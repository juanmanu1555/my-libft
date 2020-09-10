/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:11:25 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/20 16:26:12 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t count;
	size_t count2;

	count = 0;
	count2 = 0;
	if (dst == 0 || src == 0)
		return (0);
	while (src[count] != '\0')
		count++;
	if (dstsize == 0)
		return (count);
	while (src[count2] != '\0' && count2 < (dstsize - 1))
	{
		dst[count2] = src[count2];
		count2++;
	}
	dst[count2] = '\0';
	return (count);
}
