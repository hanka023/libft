/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/16 16:44:37 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ch;
	size_t			i;

	i = 0;
	ch = (unsigned char *)s;
	while (i < n)
	{
		ch[i] = 0;
		++i;
	}
}
/*
int main()
{	size_t i = 0;
	char ch[]= "kajskajskjj";
	size_t x = 10;
	ft_bzero(ch, x);
	while (i < x)
	{
	printf ("%d ", ch[i]);
	++i;
	}
	return(0);
}
*/
