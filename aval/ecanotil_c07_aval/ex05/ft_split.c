/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanotil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 15:55:18 by ecanotil          #+#    #+#             */
/*   Updated: 2026/08/11 16:10:42 by ecanotil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	is_delimiter(char l, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == l)
			return (1);
		i++;
	}
	return (0);
}

int	countwords(char *str, char *charset)
{
	int	c;
	int	in_word;

	c = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_delimiter(*str, charset) && in_word == 0)
		{
			c++;
			in_word = 1;
		}
		else if (is_delimiter(*str, charset))
		{
			in_word = 0;
		}
		str++;
	}
	return (c);
}

char	*wordsdup(char *str, int len)
{
	int		i;
	char	*dup;

	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		w;
	int		len;
	char	**words;

	if (!str)
		return (NULL);
	w = countwords(str, charset);
	words = malloc((w + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	while (i < w)
	{
		while (is_delimiter(*str, charset))
			str++;
		len = 0;
		while (str[len] && !is_delimiter(str[len], charset))
			len++;
		words[i] = wordsdup(str, len);
		str += len;
		i++;
	}
	words[i] = NULL;
	return (words);
}
/*
int	main(void)
{
	char	**res;
	int		i;

	res = ft_split("Hello   world  this is 42", " ");
	i = 0;
	while (res && res[i])
	{
		printf("[%d] %s\n", i, res[i]);
		i++;
	}
}*/
