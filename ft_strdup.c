/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/26 14:29:19 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	*ft_strdup(const char *str)

{
	int		i;
	int		len;
	char	*copy;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (0);
	while (i < len)
	{
		copy[i] = str[i];
		++i;
	}
	copy[len] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char	*original;
	char	*copy;

	original = "Ahoj světe!";
	copy = ft_strdup(original);
	if (copy)
	{
		printf("Původní: %s\n", original);
		printf("Kopie:    %s\n", copy);
		free(copy);
	}
	else
	{
		printf("Alokace selhala.\n");
	}
	return (0);
}
	*/