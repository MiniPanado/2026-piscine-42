/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 10:30:40 by marisous          #+#    #+#             */
/*   Updated: 2026/08/13 10:30:42 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_show_tab(struct s_stock_str *par);
void	ft_print_size(int nb);
void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_print_size(int nb)
{
	int		pow10;
	char	c;

	if (nb == 0)
	{
		write(1, "0\n", 2);
		return ;
	}
	pow10 = 1000000000;
	while (nb / pow10 == 0)
		pow10 /= 10;
	while (pow10 > 0)
	{
		c = '0' + nb / (pow10);
		write(1, &c, 1);
		nb = nb % pow10;
		pow10 /= 10;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != NULL)
	{
		ft_putstr(par->str);
		ft_print_size(par->size);
		ft_putstr(par->copy);
		par++;
	}
}
