/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 03:26:20 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/06 03:26:35 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

static bool	is_sep(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (true);
	return (false);
}

static size_t	count_strings(char *str, char *charset)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (true)
	{
		while (is_sep(str[i], charset))
		{
			i++;
		}
		if (str[i] != '\0')
		{
			count++;
		}
		else
		{
			break ;
		}
		while (str[i] != '\0' && is_sep(str[i], charset) == false)
		{
			i++;
		}
	}
	return (count);
}

static char	*ft_strndup(char *str, size_t n)
{
	size_t	i;
	char	*dest;

	dest = (char *)malloc((n + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n && str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_get_strings(char **strs, char *str, char *charset)
{
	size_t	i;
	size_t	index;
	size_t	len;

	i = 0;
	index = 0;
	while (true)
	{
		while (is_sep(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		len = i;
		while (str[i] != '\0' && is_sep(str[i], charset) == false)
			i++;
		len = i - len;
		strs[index] = ft_strndup((str + i - len), len);
		if (strs[index] == NULL)
			return (NULL);
		index++;
	}
	strs[index] = NULL;
	return (strs);
}

char	**ft_split(char *str, char *charset)
{
	size_t	total_strings;
	char	**strs;

	if (str == NULL || charset == NULL)
	{
		return (NULL);
	}
	total_strings = count_strings(str, charset);
	strs = (char **)malloc((total_strings + 1) * sizeof(char *));
	if (strs == NULL)
	{
		return (NULL);
	}
	strs = ft_get_strings(strs, str, charset);
	if (strs == NULL)
	{
		return (NULL);
	}
	return (strs);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**strs;

	if (argc != 4)
	{
		printf("Use: %s \"str\" \"charset\" \"expected\"\n", argv[0]);
		return (1);
	}
	strs = ft_split(argv[1], argv[2]);
	printf("Output:   ");

	if (strs != NULL && strs[0] == NULL)
	{
		printf("NULL");
	}
	else
	{
		for (int i = 0; strs[i] != NULL; i++)
		{
			if (i > 0)
				printf("|");
			printf("%s", strs[i]);
		}
	}

	printf("\nExpected: %s\n\n", argv[3]);

	if (strs != NULL)
	{
		for (int i = 0; strs[i] != NULL; i++)
			free(strs[i]);
		free(strs);
	}
	return (0);
}*/
