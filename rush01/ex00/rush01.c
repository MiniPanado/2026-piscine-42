/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 16:23:14 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/02 19:00:03 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>

bool	is_clues_sum_valid(int *clues);
void	*ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
bool	check_all(int grid[4][4], int *clues);
void	print_grid(int grid[4][4]);

static void	ft_argument_to_clues(const char *str, int *clues)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 16)
	{
		clues[i] = ft_atoi(&str[j]);
		if (i != 15)
		{
			j += 2;
		}
		i++;
	}
}

static bool	is_safe(int grid[4][4], int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == value)
		{
			return (false);
		}
		if (grid[i][col] == value)
		{
			return (false);
		}
		i++;
	}
	return (true);
}

static bool	solve(int grid[4][4], int *clues, int pos)
{
	int	guess;
	int	row;
	int	col;

	if (pos == 16)
	{
		return (check_all(grid, clues));
	}
	row = pos / 4;
	col = pos % 4;
	guess = 1;
	while (guess <= 4)
	{
		if (is_safe(grid, row, col, guess))
		{
			grid[row][col] = guess;
			if (solve(grid, clues, pos + 1))
			{
				return (true);
			}
			grid[row][col] = 0;
		}
		guess++;
	}
	return (false);
}

bool	rush01(const char *str)
{
	int	clues[16];
	int	grid[4][4];

	ft_argument_to_clues(str, clues);
	if (is_clues_sum_valid(clues) == false)
	{
		return (false);
	}
	ft_bzero(grid, sizeof(grid));
	if (solve(grid, clues, 0) == false)
	{
		return (false);
	}
	print_grid(grid);
	return (true);
}
