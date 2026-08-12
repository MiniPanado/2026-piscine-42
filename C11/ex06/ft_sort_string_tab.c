/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 00:39:44 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 03:54:19 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

static int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_sort_string_tab(char **tab)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = -1;
	size = 0;
	if (tab == NULL)
	{
		return ;
	}
	while (tab[size] != NULL)
		size++;
	if (size <= 1)
		return ;
	while (++i < (size - 1))
	{
		j = -1;
		while (++j < (size - 1 - i))
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
		}
	}
}

/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

int	main(void)
{
	char	*tab[] = {
		"Hello",
		"World",
		"42",
		"Piscine",
		"Apple",
		"Zebra",
		"banana",
		NULL
	};
	int		i;

	ft_putstr("----------------------------\nOg:\n");
	i = 0;
	while (tab[i] != NULL)
	{
		ft_putstr(tab[i]);
		write(1, "\n", 1);
		i++;
	}

	ft_sort_string_tab(tab);

	ft_putstr("----------------------------\nSorted:\n");
	i = 0;
	while (tab[i] != NULL)
	{
		ft_putstr(tab[i]);
		write(1, "\n", 1);
		i++;
	}

	ft_putstr("----------------------------\n");
	return (EXIT_SUCCESS);
}*/
