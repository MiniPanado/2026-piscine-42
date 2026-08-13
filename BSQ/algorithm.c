/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:18:34 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 22:42:05 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	min_value(int a, int b, int c)
{
	if (a < b && a < c)
	{
		return (a);
	}
	if (b < c)
	{
		return (b);
	}
	return (c);
}

void	build_dp(t_map *map)
{
	char	**grid;
	int		**dp;
	int		row;
	int		col;

	grid = map->grid;
	dp = map->dp;
	row = -1;
	while (++row < map->rows)
	{
		col = -1;
		while (++col < map->cols)
		{
			if (grid[row][col] == map->obstacle)
				dp[row][col] = 0;
			else if (row == 0 || col == 0)
				dp[row][col] = 1;
			else
				dp[row][col] = min_value(
						dp[row - 1][col],
						dp[row][col - 1],
						dp[row - 1][col - 1]) + 1;
		}
	}
}

static void	update_best(t_map *map, int row, int col, int *best)
{
	if (map->dp[row][col] > *best)
	{
		*best = map->dp[row][col];
		map->best_row = row;
		map->best_col = col;
	}
}

void	find_best_square(t_map *map)
{
	int	row;
	int	col;
	int	best;

	row = 0;
	best = 0;
	map->best_row = 0;
	map->best_col = 0;
	while (row < map->rows)
	{
		col = 0;
		while (col < map->cols)
		{
			update_best(map, row, col, &best);
			col++;
		}
		row++;
	}
	map->best_size = best;
	if (best == 0)
		return ;
	map->best_row = map->best_row - best + 1;
	map->best_col = map->best_col - best + 1;
}
