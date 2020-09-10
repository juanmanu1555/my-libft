/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas <jrivas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 19:44:19 by jrivas            #+#    #+#             */
/*   Updated: 2020/01/13 15:06:34 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char		*cpy1;
	size_t		count;

	cpy1 = (char *)s;
	count = 0;
	while (count < n)
	{
		cpy1[count] = (char)c;
		count++;
	}
	return (s);
}
