/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/28 15:12:44 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlen(const char *s)

{
	int	i;

	i = 0;
	while (*s)
	{
		++i;
		++s;
	}
	return (i);
}

/*
int	main(void)
{
	int x = 0;
	char str[] = "omfghhhshgKHG";
	x = ft_strlen(str);
	printf("%d", x);
}
	*/