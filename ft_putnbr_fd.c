/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:45:03 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/20 18:45:42 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int numb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		numb = n * -1;
	}
	else
		numb = n;
	if (numb > 9)
		ft_putnbr_fd(numb / 10, fd);
	ft_putchar_fd((numb % 10) + '0', fd);
}
