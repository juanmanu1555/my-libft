/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 15:33:45 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/29 21:07:50 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		numb_spaces(const char *nptr)
{
	size_t count;

	count = 0;
	while (nptr[count] == '\t' || nptr[count] == '\n' ||
			nptr[count] == '\r' || nptr[count] == '\v' ||
			nptr[count] == '\f' || nptr[count] == ' ')
	{
		count++;
	}
	return (count);
}

static long			get_char_atoi(const char *nptr)
{
	size_t		count;
	size_t		count2;
	long		numb;
	long		sign;

	count = numb_spaces(nptr);
	count2 = count;
	numb = 0;
	sign = 1;
	if (!((nptr[count] >= '0' &&
					nptr[count] <= '9') ||
				nptr[count] == '-' || nptr[count] == '+'))
		return (0);
	if (nptr[count] == '-')
		sign = -1;
	while (nptr[count])
	{
		if (count > count2 && (!(nptr[count] >= '0' && nptr[count] <= '9')))
			return (numb * sign);
		if (nptr[count] >= '0' && nptr[count] <= '9')
			numb = (nptr[count] - '0') + numb * 10;
		count++;
	}
	return (numb * sign);
}

int					ft_atoi(const char *str)
{
	long number;

	if (!str)
		return (0);
	number = get_char_atoi(str);
	return ((int)number);
}
