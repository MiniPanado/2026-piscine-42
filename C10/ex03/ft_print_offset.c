/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_offset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 18:31:29 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 19:51:08 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_print_offset(size_t offset)
{
	const char		base[16] = "0123456789abcdef";
	short	i;
	unsigned short	index;
	char			buffer[8];

	i = 8;
	index = 0;
	while (--i >= 0)
	{
		buffer[index++] = (unsigned char)base[(offset >> (i * 4)) & 0xF];
	}
	write(1, buffer, index);
}
