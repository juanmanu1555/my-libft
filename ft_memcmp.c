/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:01:41 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/13 15:03:45 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*cpy1;
	const unsigned char		*cpy2;
	size_t					count;

	count = 0;
	cpy1 = (unsigned char *)s1;
	cpy2 = (unsigned char *)s2;
	while (count < n)
	{
		if (!(cpy1[count] == cpy2[count]))
			return (cpy1[count] - cpy2[count]);
		count++;
	}
	return (0);
}
