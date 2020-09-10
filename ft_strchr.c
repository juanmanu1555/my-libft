/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:06:54 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/20 16:18:56 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				count;
	unsigned char	*cpy;

	count = 0;
	cpy = (unsigned char *)s;

	if (!s)
		return (NULL);

	while (s[count])
	{
		if (cpy[count] == (unsigned char)c)
			return (char *)(s + count);
		count++;
	}
	if ((unsigned char)c == '\0')
		return (char *)(s + count);
	return (NULL);
}
