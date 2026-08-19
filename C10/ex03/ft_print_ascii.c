/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 19:56:36 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 01:53:02 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

static bool	is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

void	ft_print_ascii(char *buffer, size_t size, bool option_c)
{
	size_t	i;

	if (option_c == false)
	{
		write(1, "\n", 1);
	}
	write(1, "|", 1);
	i = 0;
	while (i < size)
	{
		if (is_printable(buffer[i]))
		{
			write(1, &buffer[i], 1);
		}
		else
		{
			write(1, ".", 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
