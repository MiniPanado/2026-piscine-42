/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:49:53 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/03 19:53:15 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stddef.h>

static void	ft_print_grid(int grid[10])
{
	int		i;
	char	buffer[11];

	i = 0;
	while (i < 10)
	{
		buffer[i] = grid[i] + '0';
		i++;
	}
	buffer[i] = '\n';
	write(1, buffer, 11);
}

static int	ft_abs(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	return (nb);
}

static bool	is_guess_valid(int grid[10], int col, int guess)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (grid[i] == guess)
		{
			return (false);
		}
		if (ft_abs(col - i) == ft_abs(guess - grid[i]))
		{
			return (false);
		}
		i++;
	}
	return (true);
}

static bool	solve(int grid[10], int pos, int *count)
{
	int	guess;

	if (pos == 10)
	{
		ft_print_grid(grid);
		(*count)++;
		return (true);
	}
	guess = 0;
	while (guess < 10)
	{
		if (is_guess_valid(grid, pos, guess))
		{
			grid[pos] = guess;
			solve(grid, pos + 1, count);
			grid[pos] = 0;
		}
		guess++;
	}
	return (false);
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	grid[10];
	int	count;

	i = 0;
	while (i < 10)
	{
		grid[i++] = 0;
	}
	count = 0;
	solve(grid, 0, &count);
	return (count);
}

/*#include <stdio.h>
int main(void)
{
	ft_ten_queens_puzzle();
	printf("\nSolution Number: %d\n", ft_ten_queens_puzzle());
}*/
