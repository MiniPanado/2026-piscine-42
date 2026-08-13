/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibapti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 17:59:36 by guibapti          #+#    #+#             */
/*   Updated: 2026/08/09 16:23:16 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;
	char	out;

	a = 15;
	b = 0;
	ft_div_mod(a, b, &div, &mod);
	out = '0' + div;
	write(1, &out, 1);
	write(1, " ", 1);
	out = '0' + mod;
	write(1, &out, 1);
}
