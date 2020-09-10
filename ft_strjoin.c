/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:49:01 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/20 18:57:51 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s3_size;
	size_t		count;
	char		*s3;

	if (!s1 || !s2)
		return (NULL);
	count = 0;
	s3_size = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc(s3_size + 1 * sizeof(char));
	if (s3 == 0)
		return (NULL);
	while (s1[count])
	{
		s3[count] = s1[count];
		count++;
	}
	s3_size = 0;
	while (s2[s3_size])
	{
		s3[count] = s2[s3_size];
		count++;
		s3_size++;
	}
	s3[count] = '\0';
	return (s3);
}
