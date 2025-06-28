/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/20 20:18:37 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ch;

	ch = (unsigned char *)s;
	while (n != 0)
	{
		*ch = (unsigned char)c;
		++ch;
		--n;
	}
	return (s);
}

/*
int	main(void)
{
	char	buffer[20] = "Hello, World!";

	printf("Před memset: %s\n", buffer);
	ft_memset(buffer + 7, 'X', 5);
	printf("Po memset:   %s\n", buffer);
	return (0);
}
*/