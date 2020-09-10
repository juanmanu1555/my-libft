/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:11:49 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/27 20:26:47 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s1, char const *set)
{
	size_t				first;
	size_t				end;
	size_t				len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	first = 0;
	end = 0;
	while (s1[first] != 0)
	{
		if (!(ft_strchr(set, s1[first])))
			break ;
		first++;
	}
	end = ((int)len - 1 >= 0) ? (len - 1) : 0;
	while (end > 0 && end > first)
	{
		if (!(ft_strchr(set, s1[end])))
			break ;
		end--;
	}
	return (ft_substr(s1, first, end - first + 1));
}
