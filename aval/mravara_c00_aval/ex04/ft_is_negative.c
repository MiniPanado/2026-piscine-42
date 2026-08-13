/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 12:39:15 by mravara           #+#    #+#             */
/*   Updated: 2026/07/23 16:24:07 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, &"Ne", 2);
	else
		write(1, &"Pe", 2);
}

int	main(void)
{
 	ft_is_negative(42);
 	write(1, "\n", 1);
 	ft_is_negative(-42);
 	write(1, "\n", 1);
 	ft_is_negative(0);
 	write(1, "\n", 1);
 	return (0);
 }
