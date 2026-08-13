/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:42:01 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 12:30:29 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	apply_square(t_map *map)
{
	int			best;
	int			row;
	int			col;

	best = map->best_size;
	row = map->best_row;
	while (row < (map->best_row + best))
	{
		col = map->best_col;
		while (col < (map->best_col + best))
		{
			map->grid[row][col] = map->full;
			col++;
		}
		row++;
	}
}

void	print_map(t_map *map)
{
	int	row;

	row = 0;
	while (row < map->rows)
	{
		write(STDOUT_FILENO, map->grid[row], map->cols);
		write(STDOUT_FILENO, "\n", 1);
		row++;
	}
}

void	print_error(void)
{
	write(STDOUT_FILENO, "map error\n", 10);
}
