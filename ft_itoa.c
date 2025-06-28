/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/26 14:09:26 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int	numlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		n = (n * -1);
		++len;
	}
	while (n > 0)
	{
		n = n / 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;
	int		i;

	len = numlen(n);
	num = n;
	i = len - 1;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
		num = -num;
	i = len - 1;
	while (i >= 0)
	{
		str[i] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/*
int	main(void)
{
	int		test_values[] = {0, 1, -1, 42, -42, 12345, -12345, 2147483647,
				-2147483648};
	int		i;
	char	*result;
	for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
	{
		result = ft_itoa(test_values[i]);
		if (result)
		{
			printf("ft_itoa(%d) = \"%s\"\n", test_values[i], result);
			free(result); // nezapomeň uvolnit paměť
		}
		else
		{
			printf("ft_itoa(%d) = NULL (allocation failed)\n", test_values[i]);
		}
	}
	return (0);
}
	*/
