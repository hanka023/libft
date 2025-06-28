/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/28 14:46:06 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*x;

	i = 0;
	x = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			x = (char *)(str + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(str + i));
	return (x);
}
/*
int main(void)
{
	const char *str = "abcabcabc";
	char *res = ft_strrchr(str, 'b');
	if (res)
		printf("Nalezeno: %s\n", res); // vypíše: bc
	else
		printf("Znak nenalezen\n");
	return 0;
}
*/