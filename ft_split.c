/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/25 15:57:08 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_world;

	count = 0;
	in_world = 0;
	while (*s)
	{
		if (*s != c && in_world == 0)
		{
			in_world = 1;
			count++;
		}
		else if (*s == c)
			in_world = 0;
		s++;
	}
	return (count);
}

static int	world_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		++len;
	return (len);
}

static void	free_split(char **result, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		++i;
	}
	free(result);
}

static int	copy_word(char **result, int i, const char *s, char c)
{
	int	j;
	int	len;

	j = 0;
	len = (world_len(s, c));
	result[i] = malloc(sizeof(char) * (len + 1));
	if (!result[i])
		return (0);
	while (j < len)
	{
		result[i][j] = s[j];
		j++;
	}
	result[i][len] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;

	i = 0;
	words = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !words)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			if (!copy_word(words, i, s, c))
			{
				free_split(words, i);
				return (NULL);
			}
			s = s + world_len(s, c);
			i++;
		}
		else
			s++;
	}
	words[i] = (NULL);
	return (words);
}
/*
int	main(void)
{
	char	**result;
	int		i;
	char	*str;
	char	delimiter;

	i = 0;
	str = "xxxxxxxxhello!";
	delimiter = 'x';
	result = ft_split(str, delimiter);
	if (!result)
	{
		printf("ft_split selhalo\n");
		return (1);
	}
	while (result[i])
	{
		printf("Slovo %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
