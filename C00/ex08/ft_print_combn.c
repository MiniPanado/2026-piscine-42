/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:33:44 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/25 17:15:24 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_aux(int n, char buffer[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &buffer[i++], 1);
	}
	write(1, ", ", 2);
	while (--i >= 0)
	{
		if (buffer[i] != (10 - n + i) + '0')
		{
			buffer[i]++;
			break ;
		}
	}
	if (!(buffer[0] == (10 - n + 0) + '0'))
	{
		while (++i < n)
		{
			buffer[i] = buffer[i - 1] + 1;
		}
	}
}

void	ft_print_combn(int n)
{
	char	buffer[10];
	int		i;

	if (!(n >= 1 && n <= 9))
	{
		return ;
	}
	i = 0;
	while (i <= n)
	{
		buffer[i] = i + '0';
		i++;
	}
	while (buffer[0] != (10 - n + 0) + '0')
		ft_aux(n, buffer);
	i = 0;
	while (i < n)
	{
		write(1, &buffer[i++], 1);
	}
}

/*#include <stdlib.h>
int	main(int argc, char**argv)
{
	if (argc != 2)
		exit(1);
	ft_print_combn(atoi(argv[1]));
}*/
