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

#include <stdlib.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(int argc, char **argv)
{
	if (argc != 3)
		exit(1);
	rush(atoi(argv[1]), atoi(argv[2]));
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
