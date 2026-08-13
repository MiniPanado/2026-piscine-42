/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 17:08:24 by irabelo           #+#    #+#             */
/*   Updated: 2026/08/13 14:23:05 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nbr;

	nbr = '0';
	while (nbr <= '9')
	{
		write(STDOUT_FILENO, &nbr, 1);
		nbr++;
	}
}
