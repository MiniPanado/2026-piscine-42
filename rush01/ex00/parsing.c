/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:38:18 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/02 18:41:52 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

static bool	is_number_valid(char c)
{
	return (c >= '1' && c <= '4');
}

static bool	is_sum_valid(int x, int y)
{
	int	sum;

	sum = x + y;
	return (sum >= 3 && sum <= 5);
}

bool	is_clues_sum_valid(int *clues)
{
	int	i;
	int	*col;
	int	*row;

	i = 0;
	col = clues;
	row = &clues[8];
	while (i < 4)
	{
		if (is_sum_valid(col[i], col[i + 4]) == false)
		{
			return (false);
		}
		if (is_sum_valid(row[i], row[i + 4]) == false)
		{
			return (false);
		}
		i++;
	}
	return (true);
}

bool	is_parsing_valid(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (is_number_valid(str[i]))
		{
			count++;
			i++;
			if (count == 16 && str[i] == '\0')
				return (true);
			if (str[i] != ' ' || str[i] == '\0' || count == 16)
			{
				return (false);
			}
			i++;
		}
		else
			break ;
	}
	return (false);
}
