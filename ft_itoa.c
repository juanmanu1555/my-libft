/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:39:12 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/29 20:36:21 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			count_int(int *m, unsigned long long int n)
{
	if (n > 9)
	{
		*m += 1;
		count_int(m, n / 10);
	}
	else
		*m += 1;
}

static void			int_to_char(long int numb,
		int size, char *s1, int is_negative)
{
	while (size > 0)
	{
		size--;
		if (numb > 9)
		{
			s1[size] = (numb % 10) + '0';
		}
		else
		{
			s1[size] = numb + '0';
		}
		if (is_negative && size == 0)
			s1[size] = '-';
		numb /= 10;
	}
}

char				*ft_itoa(int n)
{
	char		*numb;
	long int	m;
	int			*x;
	int			j;
	int			is_negative;

	j = 0;
	x = &j;
	is_negative = 0;
	m = n;
	if (m < 0)
	{
		m *= -1;
		is_negative = 1;
	}
	count_int(x, m);
	if (is_negative == 1)
		*x += 1;
	numb = (char *)malloc((*x + 1) * sizeof(char));
	if (!numb)
		return (NULL);
	int_to_char(m, j, numb, is_negative);
	numb[*x] = '\0';
	return (numb);
}
