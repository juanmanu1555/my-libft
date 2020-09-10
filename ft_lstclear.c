/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:14:08 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/27 16:15:13 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst2;

	if (lst)
	{
		while (*lst)
		{
			lst2 = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = lst2;
		}
	}
}
