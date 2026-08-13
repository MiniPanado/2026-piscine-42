/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:49:39 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/03 19:49:42 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb <= 3)
	{
		return (1);
	}
	if (nb % 2 == 0 || nb % 3 == 0)
	{
		return (0);
	}
	i = 5;
	while (i <= nb / i)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
		{
			return (0);
		}
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	if (nb % 2 == 0)
	{
		nb++;
	}
	while (!ft_is_prime(nb))
	{
		nb += 2;
	}
	return (nb);
}
