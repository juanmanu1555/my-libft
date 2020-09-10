/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:15:24 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/27 18:52:44 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_copy_arrays(char *dst, char *src)
{
	int size;

	size = 0;
	while (src[size])
	{
		dst[size] = src[size];
		size++;
	}
	dst[size] = '\0';
}

t_list			*ft_lstnew(void *content)
{
	t_list		*list;
	size_t		size;
	char		*dst;
	char		*src;

	if (!(list = (t_list *)malloc(sizeof(*list))))
		return (NULL);
	if (!content)
		list->content = NULL;
	else
	{
		src = (char *)content;
		size = ft_strlen(src);
		if (!(list->content = (void *)malloc(size + 1)))
		{
			free(list);
			return (NULL);
		}
		dst = (char *)(list->content);
		ft_copy_arrays(dst, src);
	}
	list->next = NULL;
	return (list);
}
