/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:51:53 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/13 17:12:25 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				count;
	unsigned char		*cpy1;

	count = 0;
	cpy1 = (unsigned char *)s;
	while (count < n)
	{
		if (cpy1[count] == (unsigned char)c)
			return (cpy1 + count);
		count++;
	}
	return (NULL);
}
