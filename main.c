/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivas-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 10:37:08 by jrivas-z          #+#    #+#             */
/*   Updated: 2020/01/29 20:04:23 by jrivas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"


int main( void )
{
	   char *src = "123456789123";
		
	   char const *s1 = "coco telica coco";
	   char const *set = "co";
   		//printf("atoi original: %d\n", atoi(src));
   		//printf("mio: %d", ft_atoi(src));
	//	printf("%s", ft_strtrim(s1, set));
	printf("%s", ft_itoa(0));
	   return 0;
}
