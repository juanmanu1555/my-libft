/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_in_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:26:12 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/27 19:46:31 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_char_in_str(char const *str, char c)
{
	size_t count;

	if (str)
	{
		count = 0;
		while (str[count])
		{
			if (str[count] == c)
				return (1);
			count++;
		}
	}
	return (0);
}
