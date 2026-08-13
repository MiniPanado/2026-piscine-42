/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_section.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 19:52:26 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 02:18:08 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

static void	ft_print_hex_default(char *buffer, size_t size)
{
	size_t		i;
	const char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			if (i + 1 < size)
			{
				write(1, &hex[(unsigned char)buffer[i + 1] / 16], 1);
				write(1, &hex[(unsigned char)buffer[i + 1] % 16], 1);
			}
			else
				write(1, "00", 2);
			write(1, &hex[(unsigned char)buffer[i] / 16], 1);
			write(1, &hex[(unsigned char)buffer[i] % 16], 1);
		}
		else
			write(1, "    ", 4);
		i += 2;
		if (i < 16)
			write(1, " ", 1);
	}
}

static void	ft_print_c_hex(char *buffer, size_t size)
{
	size_t		i;
	const char	*hex;

	hex = "0123456789abcdef";
	write(1, "  ", 2);
	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			write(1, &hex[(unsigned char)buffer[i] / 16], 1);
			write(1, &hex[(unsigned char)buffer[i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		write(1, " ", 1);
		if (i == 7)
			write(1, " ", 1);
		i++;
	}
}

static void	ft_print_c_ascii(char *buffer, size_t size)
{
	size_t	i;

	write(1, " |", 2);
	i = 0;
	while (i < size)
	{
		if (buffer[i] >= ' ' && buffer[i] <= '~')
			write(1, &buffer[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "|", 1);
}

static bool	ft_check_duplicate(char *buffer, size_t size, t_hexdump *hd)
{
	if (size == 16 && hd->has_prev
		&& ft_memcmp(buffer, hd->prev_buf, 16) == 0)
	{
		if (!hd->same_printed)
		{
			write(1, "*\n", 2);
			hd->same_printed = true;
		}
		return (true);
	}
	if (size == 16)
	{
		memcpy(hd->prev_buf, buffer, 16);
		hd->has_prev = true;
	}
	hd->same_printed = false;
	return (false);
}

void	ft_print_line(char *buffer, size_t size, t_hexdump *hd)
{
	if (size == 0)
		return ;
	if (ft_check_duplicate(buffer, size, hd))
		return ;
	ft_print_offset(hd->offset, hd->option_c);
	if (!hd->option_c)
	{
		write(1, " ", 1);
		ft_print_hex_default(buffer, size);
	}
	else
	{
		ft_print_c_hex(buffer, size);
		ft_print_c_ascii(buffer, size);
	}
	write(1, "\n", 1);
}
