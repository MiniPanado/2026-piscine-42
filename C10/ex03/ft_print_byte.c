/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_byte.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 19:52:26 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 19:55:48 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_byte(char c)
{
	const char	base[16] = "0123456789abcdef";

	ft_putchar(base[(unsigned char)c / 16]);
	ft_putchar(base[(unsigned char)c % 16]);
}
