/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltdomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 16:13:09 by eltdomin          #+#    #+#             */
/*   Updated: 2026/08/13 13:52:30 by eltdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb != 1)
		num = num * --nb;
	return (num);
}
