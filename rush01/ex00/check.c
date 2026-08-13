/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 16:38:23 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/02 19:13:25 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

static bool	check_row(int grid[4][4], int row, int left_clue, int right_clue)
{
	int	i;
	int	max_left;
	int	max_right;
	int	count_left;
	int	count_right;

	i = -1;
	max_left = 0;
	max_right = 0;
	count_left = 0;
	count_right = 0;
	while (++i < 4)
	{
		if (grid[row][i] > max_left)
		{
			max_left = grid[row][i];
			count_left++;
		}
		if (grid[row][3 - i] > max_right)
		{
			max_right = grid[row][3 - i];
			count_right++;
		}
	}
	return ((count_left == left_clue) && (count_right == right_clue));
}

static bool	check_col(int grid[4][4], int col, int up_clue, int bottom_clue)
{
	int	i;
	int	max_up;
	int	max_bottom;
	int	count_up;
	int	count_bottom;

	i = -1;
	max_up = 0;
	max_bottom = 0;
	count_up = 0;
	count_bottom = 0;
	while (++i < 4)
	{
		if (grid[i][col] > max_up)
		{
			max_up = grid[i][col];
			count_up++;
		}
		if (grid[3 - i][col] > max_bottom)
		{
			max_bottom = grid[3 - i][col];
			count_bottom++;
		}
	}
	return ((count_up == up_clue) && (count_bottom == bottom_clue));
}

bool	check_all(int grid[4][4], int *clues)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_row(grid, i, clues[8 + i], clues[12 + i]))
		{
			return (false);
		}
		if (!check_col(grid, i, clues[0 + i], clues[4 + i]))
		{
			return (false);
		}
		i++;
	}
	return (true);
}
