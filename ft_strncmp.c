/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:13:51 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/13 18:45:51 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t count;

	count = 0;
	if (n <= 0)
		return (0);
	if (s1 == 0)
	{
		return (*((unsigned char *)s1 + count) -
				*((unsigned char *)s2 + count));
	}
	while (s1[count] && s2[count] && count < n)
	{
		if (s1[count] != s2[count])
		{
			return (*((unsigned char *)s1 + count) -
					*((unsigned char *)s2 + count));
		}
		count++;
	}
	if (s1[count] != s2[count] && count < n)
	{
		return (*((unsigned char *)s1 + count) -
				*((unsigned char *)s2 + count));
	}
	return (0);
}
