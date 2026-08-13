/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_offset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 18:31:29 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 02:02:25 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

void	ft_print_offset(size_t offset, bool option_c)
{
	const char	base[] = "0123456789abcdef";
	char		buffer[8];
	int			i;
	int			len;
	int			index;

	len = 7;
	if (option_c == true)
	{
		len = 8;
	}
	i = len;
	index = 0;
	while (--i >= 0)
	{
		buffer[index++] = base[(offset >> (i * 4)) & 0xF];
	}
	write(1, buffer, index);
}
