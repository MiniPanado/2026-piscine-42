/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 00:39:44 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 01:16:40 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ans;

	if (tab == NULL || f == NULL || length <= 0)
	{
		return (NULL);
	}
	ans = (int *)malloc((length) * sizeof(int));
	if (ans == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < length)
	{
		ans[i] = f(tab[i]);
		i++;
	}
	return (ans);
}

/*#include <stdio.h>
#include <unistd.h>

static int	ft_plus_two(int nb)
{
	return (nb + 2);
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

int	main(void)
{
	int		tab[] = {1, 2, 3, 4, 5};
	int		*new_tab;
	size_t	size = sizeof(tab) / sizeof(tab[0]); 

	write(1, "----------------------------\nOg: ", 34);
	for (size_t i = 0; i < size; i++)
	{
		ft_putnbr(tab[i]);
	}
	write(1, "\n----------------------------\nNew: ", 35);
	new_tab = ft_map(tab, size, &ft_plus_two);
	for (size_t i = 0; i < size; i++)
	{
		ft_putnbr(new_tab[i]);
	}
	write(1, "\n----------------------------\n", 30);
	free(new_tab);
}*/
