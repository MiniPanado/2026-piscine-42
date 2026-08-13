/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 11:33:07 by irabelo           #+#    #+#             */
/*   Updated: 2026/08/12 22:42:21 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	get_header_len(const char *line)
{
	int	len;

	len = 0;
	while (*(line + len) != '\n')
	{
		if (*(line + len) == '\0')
			return (-1);
		len++;
	}
	return (len);
}

static bool	is_valid_number(const char *line, int len)
{
	int	i;

	if (len <= 0)
		return (false);
	i = 0;
	while (i < len)
	{
		if (!ft_is_digit(*(line + i)))
			return (false);
		i++;
	}
	return (true);
}

static bool	is_valid_line(const char *line)
{
	int	i;
	int	j;

	i = 0;
	while (*(line + i) != '\n')
	{
		if (*(line + i) < ' ' || *(line + i) > '~')
			return (false);
		j = i + 1;
		while (*(line + j) != '\n')
		{
			if (*(line + j) == *(line + i))
				return (false);
			j++;
		}
		i++;
	}
	if (i != 3)
		return (false);
	return (true);
}

static int	parse_header(const char *line, t_map *map, int *header_len)
{
	int	len;

	len = get_header_len(line);
	if (len == -1
		|| !is_valid_number(line, len - 3)
		|| !is_valid_line(line + len - 3))
	{
		print_error();
		return (-1);
	}
	map->rows = ft_atoi_len(line, len - 3);
	if (map->rows <= 0)
	{
		print_error();
		return (-1);
	}
	map->empty = *(line + (len - 3));
	map->obstacle = *(line + (len - 2));
	map->full = *(line + (len - 1));
	*header_len = len + 1;
	return (0);
}

int	parse_map(const char *content, t_map *map)
{
	int	header_len;

	header_len = 0;
	if (parse_header(content, map, &header_len) == -1)
		return (-1);
	if (validate_map_body(content, header_len, map) == false)
	{
		print_error();
		return (-1);
	}
	if (alloc_map(map) == -1)
	{
		print_error();
		return (-1);
	}
	copy_grid(content, header_len, map);
	return (0);
}
