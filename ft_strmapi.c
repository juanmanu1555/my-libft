/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:03:52 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/20 19:08:54 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	count2;
	unsigned int	count;

	if (!s || !f)
		return (NULL);
	count2 = 0;
	count = ft_strlen(s);
	s2 = (char *)malloc((count + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (s[count2])
	{
		s2[count2] = (*f)(count2, s[count2]);
		count2++;
	}
	s2[count2] = '\0';
	return (s2);
}
