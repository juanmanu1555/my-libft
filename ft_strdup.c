/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:08:46 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/29 21:17:29 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*ptr;

	len = ft_strlen((char *)s1);
	if ((ptr = (char *)malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	ft_memcpy(ptr, (char *)s1, len);
	ptr[len] = '\0';
	return (ptr);
}
