/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 18:00:35 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/25 21:26:35 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOP 'A'
#define JUNGLE 'B'
#define MID ' '
#define BOTTOM 'C'

void	ft_putchar(char c);

void	ft_print_line(int nums_columns, char left, char mid, char right)
{
	int	column;

	column = 0;
	while (column < nums_columns)
	{
		if (column == 0)
		{
			ft_putchar(left);
		}
		else if (column == (nums_columns - 1))
		{
			ft_putchar(right);
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
		if (row == 0)
		{
			ft_print_line(x, TOP, JUNGLE, TOP);
		}
		else if (row == (y - 1))
		{
			ft_print_line(x, BOTTOM, JUNGLE, BOTTOM);
		}
		else
		{
			ft_print_line(x, JUNGLE, MID, JUNGLE);
		}
		row++;
	}
}
