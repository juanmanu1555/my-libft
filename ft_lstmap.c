/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:10:07 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/27 16:16:08 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		**lst_return;
	t_list		*lst2;
	t_list		*new;

	if (!lst || !f)
		return (NULL);
	lst2 = NULL;
	lst_return = &lst2;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(lst_return, del);
			return (NULL);
		}
		ft_lstadd_back(lst_return, new);
		lst = lst->next;
	}
	return (*lst_return);
}
