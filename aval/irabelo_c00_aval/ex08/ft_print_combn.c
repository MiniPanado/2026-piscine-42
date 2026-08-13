/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 13:14:52 by irabelo           #+#    #+#             */
/*   Updated: 2026/08/13 17:59:29 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_update_combination(int *digits, int n)
{
	int	i;

	i = n - 1;
	while (digits[i] == 10 - n + i)
		i--;
	digits[i]++;
	i++;
	while (i < n)
	{
		digits[i] = digits[i - 1] + 1;
		i++;
	}
	write(STDOUT_FILENO, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	digits[10];
	int	i;
	int	done;

	i = 0;
	if (n < 1 || n > 9)
		return ;
	while (i < n)
	{
		digits[i] = i;
		i++;
	}
	done = 0;
	while (!done)
	{
		i = 0;
		while (i < n)
			ft_putchar(digits[i++] + '0');
		if (digits[0] == 10 - n)
			done = 1;
		else
			ft_update_combination(digits, n);
	}
}
