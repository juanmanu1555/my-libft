/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:28:28 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/20 19:30:11 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	size_t count;

	if (!lst)
		return (0);
	if (!(lst)->next)
		return (1);
	count = 1;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	if (count > 1)
		count--;
	return (count);
}
