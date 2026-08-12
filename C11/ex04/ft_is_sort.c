/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 00:39:44 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 01:52:58 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (tab == NULL || f == NULL || length <= 1)
	{
		return (1);
	}
	i = 0;
	while (i < (length - 1))
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define LETTER 'l'

static void	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	write(1, str, i);
}

static void	ft_putnbr(int nb)
{
	unsigned int num;

	num = (nb < 0) ? -(unsigned int)nb : (unsigned int)nb;
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	write(1, &"0123456789"[num % 10], 1);
	write(1, " ", 1);
}

static int	ft_nbrcmp(int n1, int n2)
{
	if (n1 > n2)
		return (1);
	if (n2 > n1)
		return (-1);
	return (0);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 1};
	int	size = sizeof(tab) / sizeof(tab[0]);

	ft_putstr("----------------------------\nOg: ");
	int i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		i++;
	}
	ft_putstr("\n----------------------------\nIs Sorted: ");
	ft_putnbr(ft_is_sort(tab, size, &ft_nbrcmp));
	ft_putstr("\n----------------------------\n");
	return (EXIT_SUCCESS);
}*/
