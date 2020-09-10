/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:10:09 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/20 19:10:31 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*s2;
	size_t		count;

	count = 0;
	s2 = (char *)malloc(len + 1 * sizeof(char));
	if (s2 == 0)
		return (NULL);
	if (len <= 0 || s == 0)
		return (s2);
	while (s[start] && len > 0)
	{
		s2[count] = s[start];
		count++;
		start++;
		len--;
	}
	s2[count] = '\0';
	return (s2);
}
