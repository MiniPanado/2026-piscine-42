/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsemirkh <zsemirkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 12:51:55 by zsemirkh          #+#    #+#             */
/*   Updated: 2026/08/09 15:13:19 by zsemirkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	if (!base)
		return (0);
	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	checkbase(char *base)
{
	int	i;
	int	j;

	if (!base)
		return (0);
	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (!((base[i] >= '0' && base[i] <= '9')
				|| (base[i] >= 'A' && base[i] <= 'Z')
				|| (base[i] >= 'a' && base[i] <= 'z')))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int n, char *base, int blen)
{
	long	l;

	l = n;
	if (l < 0)
	{
		ft_putchar('-');
		l *= -1;
	}
	if (l >= blen)
		ft_putnbr(l / blen, base, blen);
	ft_putchar(base[l % blen]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	blen;

	blen = 0;
	if (!checkbase(base))
		return ;
	blen = ft_strlen(base);
	ft_putnbr (nbr, base, blen);
}
/*
int	main(void)
{
	ft_putnbr_base(-1245, "0123456+7ABCDEF");
}
*/
