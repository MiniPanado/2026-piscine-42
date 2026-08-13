/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 13:10:56 by irabelo           #+#    #+#             */
/*   Updated: 2026/08/12 21:52:16 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	line_length(const char *content, int start)
{
	int	i;

	i = start;
	while (content[i] != '\n' && content[i] != '\0')
	{
		i++;
	}
	return (i - start);
}

static bool	is_allowed_char(char c, t_map *map)
{
	return (c == map->empty || c == map->obstacle || c == map->full);
}

static bool	validate_line_chars(const char *line, int len, t_map *map)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (!is_allowed_char(line[i], map))
			return (false);
		i++;
	}
	return (true);
}

bool	validate_map_body(const char *content, int start, t_map *map)
{
	int	pos;
	int	len;
	int	line_count;

	pos = start;
	map->cols = line_length(content, pos);
	if (map->cols == 0)
		return (false);
	line_count = 0;
	while (content[pos] != '\0')
	{
		len = line_length(content, pos);
		if (len != map->cols || !validate_line_chars(content + pos, len, map))
			return (false);
		pos += len;
		if (content[pos] == '\n')
			pos++;
		line_count++;
	}
	return (line_count == map->rows);
}
