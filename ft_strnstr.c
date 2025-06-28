/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/28 14:46:14 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	if (!haystack && len == 0)
		return (NULL);
	while (haystack[i] && (i < len))
	{
		if (haystack[i] == needle[j])
		{
			while ((i + j) < len && needle[j] && (haystack[i + j] == needle[j]))
				j++;
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
		}
		j = 0;
		++i;
	}
	return (0);
}

/*
int	main(void)
{
	const char	*haystack = "Hello 42 students!";
	const char	*needle = "42";
	char		*result;
	result = ft_strnstr(haystack, needle, 10);
	if (result)
		printf("Found: '%s'\n", result);
	else
		printf("Not found.\n");
	return (0);
}
	*/