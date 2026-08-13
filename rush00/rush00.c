/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 19:24:18 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/26 12:39:03 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOP 'o'
#define JUNGLE '|'
#define MID ' '
#define BOTTOM '-'

void	ft_putchar(char c);

void	ft_print_line(int nums_columns, char edge, char mid)
{
	int	column;

	column = 0;
	while (column < nums_columns)
	{
		if (column == 0 || column == (nums_columns - 1))
		{
			ft_putchar(edge);
		}
		else
		{
			ft_putchar(mid);
		}
		column++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	row = 0;
	while (row < y)
	{
		if (row == 0 || row == (y - 1))
		{
			ft_print_line(x, TOP, BOTTOM);
		}
		else
		{
			ft_print_line(x, JUNGLE, MID);
		}
		row++;
	}
}
