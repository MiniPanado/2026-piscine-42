/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 01:33:10 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/08 02:00:51 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

static void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

static void	ft_putnbr(int number)
{
	unsigned int	num;

	if (number < 0)
	{
		write(1, "-", 1);
		num = -(unsigned int)number;
	}
	else
		num = (unsigned int)number;
	if (num >= 10)
		ft_putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	if (par == NULL)
	{
		return ;
	}
	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("You need to write at least one arguments!\n");
		return (0);
	}

	t_stock_str *tab = ft_strs_to_tab(argc - 1, argv + 1);
	if (tab == NULL)
	{
		return (1);
	}

	ft_show_tab(tab);

	for (int i = 0; i <= argc - 1; i++)
	{
		free(tab[i].copy);
	}
	free(tab);
	return (0);
}*/
