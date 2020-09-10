/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:04:02 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/27 17:57:19 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		copy_memory(unsigned char *cpy1, size_t len, unsigned char *src)
{
	size_t				count;

	count = 0;
	if (((unsigned char *)src) < cpy1)
	{
		while (len > 0)
		{
			len--;
			cpy1[len] = *((unsigned char *)src + len);
		}
	}
	else
	{
		while (count < len)
		{
			cpy1[count] = *((unsigned char *)src + count);
			count++;
		}
	}
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cpy1;

	if (dst == src)
		return (dst);
	cpy1 = (unsigned char*)dst;
	if (cpy1 == 0 && ((unsigned char *)src) == 0)
		return (NULL);
	copy_memory(cpy1, len, (unsigned char *)src);
	return (dst);
}
