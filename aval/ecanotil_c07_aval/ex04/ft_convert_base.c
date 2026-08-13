/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanotil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 14:50:57 by ecanotil          #+#    #+#             */
/*   Updated: 2026/08/11 16:03:26 by ecanotil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	base_is_valid(char *base);
int	is_in_base(char nbr, char *base_from);
int	base_len(char *base);
int	ft_atoi_base(char *nbr, char *base_from);

int	ft_count_digits(int nbr, int base_len)
{
	int		d;
	long	n;

	n = nbr;
	d = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		d++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= base_len;
		d++;
	}
	return (d);
}

char	*ft_itoa_base(int nbr, char *base_to)
{
	long		n;
	char		*str;
	int			i;
	int			base_l;

	n = nbr;
	base_l = base_len(base_to);
	i = ft_count_digits(nbr, base_l);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		str[i] = base_to[n % base_l];
		n /= base_l;
		i--;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;

	if (base_is_valid(base_from) == 0 || base_is_valid(base_to) == 0)
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(n, base_to));
}
/*
int	main(int argc, char **argv)
{
	char	*result;

	if (argc != 4)
		return (1);
	result = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
