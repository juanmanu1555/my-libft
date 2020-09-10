/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:39:01 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/20 18:44:47 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	count;
	char	c;

	if (!s || !fd)
		return ;
	c = '\n';
	count = 0;
	while (s[count])
	{
		write(fd, (s + count), 1);
		count++;
	}
	write(fd, &c, 1);
}
