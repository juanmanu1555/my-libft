/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:18:23 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/20 16:40:43 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int count;
	int last_char;

	count = 0;
	last_char = -1;
	while (s[count])
	{
		if ((unsigned char)s[count] == (unsigned char)c)
			last_char = count;
		count++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s + count);
	if (last_char == -1)
		return (0);
	return ((char *)s + last_char);
}
