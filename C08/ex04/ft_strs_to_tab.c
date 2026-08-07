/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 04:54:27 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/07 01:29:34 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

static char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	ft_free_av(t_stock_str *tab, int i)
{
	while (--i >= 0)
	{
		free(tab[i].copy);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	if (av == NULL || ac < 0)
		return (NULL);
	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].copy == NULL)
		{
			ft_free_av(tab, i);
			free(tab);
			return (NULL);
		}
	}
	tab[i].size = 0;
	tab[i].str = NULL;
	tab[i].copy = NULL;
	return (tab);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("You need to write at least one arguments!\n");
		return (0);
	}
	t_stock_str *tab = ft_strs_to_tab(argc - 1, argv + 1);
	for (int i = 0; i <= argc - 1; i++)
	{
		printf("----------------------------------------------------\n");
		printf("tab[%d].size: %d\n", i, tab[i].size);
		printf("tab[%d].str: %s\n", i, tab[i].str);
		printf("tab[%d].copy: %s\n", i, tab[i].copy);
		printf("----------------------------------------------------\n");
	}
	return (0);
}*/
