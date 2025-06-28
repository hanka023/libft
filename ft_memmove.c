/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/21 18:19:47 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (d > s && d < s + n)
		while (n--)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			++i;
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char buffer1[100] = "abcdefghijklmn";
	char buffer2[100] = "abcdefghijklmn";

	// Test 1: překryv shora dolů
	printf("Test 1: překryv (shora dolů)\n");
	ft_memmove(buffer1 + 2, buffer1, 5);
	memmove(buffer2 + 2, buffer2, 5);
	printf("ft_memmove: %s\n", buffer1);
	printf("memmove   : %s\n\n", buffer2);

	// Test 2: překryv (zdola nahoru)
	char buffer3[100] = "abcdefghijklmn";
	char buffer4[100] = "abcdefghijklmn";
	printf("Test 2: překryv (zdola nahoru)\n");
	ft_memmove(buffer3, buffer3 + 2, 5);
	memmove(buffer4, buffer4 + 2, 5);
	printf("ft_memmove: %s\n", buffer3);
	printf("memmove   : %s\n\n", buffer4);

	// Test 3: různé bloky paměti
	char src[] = "123456789";
	char dest1[20] = {0};
	char dest2[20] = {0};
	printf("Test 3: různé bloky\n");
	ft_memmove(dest1, src, 9);
	memmove(dest2, src, 9);
	printf("ft_memmove: %s\n", dest1);
	printf("memmove   : %s\n\n", dest2);

	// Test 4: NULL pointery
	printf("Test 4: NULL pointery\n");
	printf("ft_memmove(NULL, NULL, 5) = %p\n", ft_memmove(NULL, NULL, 5));
	// standardní memmove by tady segfaultla, nebudeme ji volat

	return (0);
}
	*/
