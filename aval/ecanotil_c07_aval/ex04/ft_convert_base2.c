/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanotil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:34:43 by ecanotil          #+#    #+#             */
/*   Updated: 2026/08/11 16:04:44 by ecanotil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	base_is_valid(char *base)
{
	int	i;
	int	l;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		l = i + 1;
		while (base[l])
		{
			if (base[l] == base[i])
				return (0);
			l++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	is_in_base(char nbr, char *base_from)
{
	int	i;

	i = 0;
	while (base_from[i])
	{
		if (nbr == base_from[i])
			return (i);
		i++;
	}
	return (-1);
}

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_in_base(nbr[i], base_from) != -1)
	{
		result = result * base_len(base_from) + is_in_base(nbr[i], base_from);
		i++;
	}
	return (result * sign);
}
