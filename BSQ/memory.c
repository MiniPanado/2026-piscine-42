/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 13:11:15 by irabelo           #+#    #+#             */
/*   Updated: 2026/08/12 22:42:33 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static char	**alloc_grid(int rows, int cols)
{
	char	**grid;
	int		i;

	grid = malloc(sizeof(char *) * rows);
	if (!grid)
		return (NULL);
	i = 0;
	while (i < rows)
	{
		grid[i] = malloc(cols + 1);
		if (!grid[i])
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		i++;
	}
	return (grid);
}

static int	**alloc_dp(int rows, int cols)
{
	int	**dp;
	int	i;

	dp = malloc(sizeof(int *) * rows);
	if (!dp)
		return (NULL);
	i = 0;
	while (i < rows)
	{
		dp[i] = malloc(sizeof(int) * cols);
		if (!dp[i])
		{
			while (--i >= 0)
				free(dp[i]);
			free(dp);
			return (NULL);
		}
		i++;
	}
	return (dp);
}

int	alloc_map(t_map *map)
{
	map->grid = alloc_grid(map->rows, map->cols);
	if (map->grid == NULL)
		return (-1);
	map->dp = alloc_dp(map->rows, map->cols);
	if (map->dp == NULL)
	{
		free_map(map);
		return (-1);
	}
	return (0);
}

void	free_map(t_map *map)
{
	int	i;

	i = 0;
	while (map->grid && i < map->rows)
	{
		free(map->grid[i]);
		i++;
	}
	free(map->grid);
	i = 0;
	while (map->dp && i < map->rows)
	{
		free(map->dp[i]);
		i++;
	}
	free(map->dp);
}

void	copy_grid(const char *content, int start, t_map *map)
{
	int	pos;
	int	row;
	int	col;

	pos = start;
	row = 0;
	while (row < map->rows)
	{
		col = 0;
		while (col < map->cols)
		{
			map->grid[row][col] = content[pos + col];
			col++;
		}
		map->grid[row][col] = '\0';
		pos += map->cols + 1;
		row++;
	}
}
