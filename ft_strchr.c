/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/25 16:57:22 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strchr(const char *str, int c)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		++i;
	}
	if ((char)c == '\0')
		return ((char *)(str + i));
	return (0);
}

/*
int	main(void)
{

	char	str[] = "hello worx    ,m,m,mld c ";
	char	find = 'x';
	char	*result = ft_strchr(str, find);
	if (result)
		printf("position %c: %ld\n", find, result - str);
	else
		printf(" '%c' is not here :(\n", find);
	return (0);
}
	*/
