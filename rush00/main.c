/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:43:07 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/25 19:21:31 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	rush(123, 42);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	for (int i = 1; i <= 26; i++)
	{
		printf("%c: %d\n", ('A' + i - 1), i % 5);
	}
}*/
