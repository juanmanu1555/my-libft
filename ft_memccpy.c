/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:48:54 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/17 16:14:08 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*cpy1;
	unsigned char		*cpy2;
	size_t				count;

	cpy1 = (unsigned char*)dst;
	cpy2 = (unsigned char*)src;
	count = 0;
	while (count < n)
	{
		cpy1[count] = cpy2[count];
		if (cpy2[count] == (unsigned char)c)
		{
			return ((void *)(dst + count + 1));
		}
		count++;
	}
	return (NULL);
}
