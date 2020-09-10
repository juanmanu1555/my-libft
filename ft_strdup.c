/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:08:46 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/29 21:17:29 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		size;
	size_t		size2;

	size = 0;
	size2 = 0;
	if (!s1)
		return (NULL);
	while (s1[size2] != '\0')
		size2++;
	s2 = (char *)malloc((size2 + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	size = 0;
	while (s1[size] && size < size2)
	{
		s2[size] = s1[size];
		size++;
	}
	s2[size] = '\0';
	return (s2);
}
