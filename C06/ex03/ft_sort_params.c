/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 19:56:12 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/04 19:57:24 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

static void	ft_putstr(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	write(STDOUT_FILENO, str, i);
	write(STDOUT_FILENO, "\n", 1);
}

static int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

static void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

static void	ft_bubble_sort(char **strs, size_t size)
{
	size_t	i;
	size_t	j;

	if (size < 2)
	{
		return ;
	}
	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - 1 - i))
		{
			if (ft_strcmp(strs[j], strs[j + 1]) > 0)
			{
				ft_swap(&strs[j], &strs[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (1);
	}
	argc--;
	argv++;
	ft_bubble_sort(argv, argc);
	while (*argv != NULL)
	{
		ft_putstr(*argv);
		argv++;
	}
	return (0);
}
