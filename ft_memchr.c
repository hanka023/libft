/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/26 14:23:22 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		uc;
	size_t				i;

	ptr = (const unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == uc)
		{
			return ((void *)(ptr + i));
		}
		++i;
	}
	return (NULL);
}

/*
int	main(void)
{
	int		x;
	char	data[] = "1234567P..........";
	char	*found;

	x = 'P';
	found = ft_memchr(data, x, 8);
	if (found) {
		printf("here is it: %s\n", found);
	} else {
		printf("no x :( \n");
	}
	return (0);
}
*/