/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_header.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 14:05:30 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 14:48:08 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_print_header(int count, const char *filename)
{
	if (count < 0)
	{
		return ;
	}
	if (count == 0)
		write(1, "==> ", 4);
	else
		write(1, "\n==> ", 5);
	write(1, filename, ft_strlen(filename));
	write(1, " <==\n", 5);
}
