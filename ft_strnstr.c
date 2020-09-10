/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:16:39 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/27 18:07:38 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*str_search_str(const char *haystack, const char *needle,
		size_t len, size_t count2)
{
	size_t count;
	size_t count3;

	count = 0;
	count3 = 0;
	while (haystack[count] && count < len)
	{
		if (haystack[count] == needle[count3])
		{
			count3++;
			if (count2 == count3)
				return (char *)(haystack + (count - count2 + 1));
		}
		else
			count3 = 0;
		count++;
	}
	return (0);
}

char			*ft_strnstr(const char *haystack,
		const char *needle, size_t len)
{
	size_t count2;

	count2 = 0;
	if (needle[0] == '\0')
		return (char *)(haystack);
	if (len == 0)
		return (NULL);
	while (needle[count2])
		count2++;
	if (count2 == 0)
		return (char *)(haystack);
	return (str_search_str(haystack, needle, len, count2));
}
