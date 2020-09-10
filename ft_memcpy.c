/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:40:22 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/27 17:28:00 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		count;
	char		*cp1;
	char		*cp2;

	if (dst == src)
		return (dst);
	count = 0;
	cp1 = (char *)dst;
	cp2 = (char *)src;
	if (n <= 0)
		return (dst);
	if (cp1 == 0 && cp2 == 0)
		return (NULL);
	while (count < n)
	{
		cp1[count] = cp2[count];
		count++;
	}
	return (dst);
}
