/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 02:14:19 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/31 01:49:57 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

// 9  == '\t'
// 13 == '\r'

#define ASCII_SIZE 256

static bool	ft_is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static bool	ft_base_is_valid(char *base)
{
	int		i;
	short	freq[ASCII_SIZE];

	if (!base || *base == '\0' || base[1] == '\0')
		return (false);
	i = 0;
	while (i < ASCII_SIZE)
		freq[i++] = 0;
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || ft_is_space(base[i]))
			return (false);
		if (++freq[(unsigned char)base[i]] > 1)
			return (false);
		i++;
	}
	return (true);
}

static int	ft_lookup_inic(short *lookup, char *base)
{
	int	i;

	i = 0;
	while (i < ASCII_SIZE)
		lookup[i++] = -1;
	i = 0;
	while (base[i] != '\0')
	{
		lookup[(unsigned char)base[i]] = i;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	short	lookup[ASCII_SIZE];
	short	signal;
	int		res;
	int		base_len;

	if (!base || !ft_base_is_valid(base))
		return (0);
	i = 0;
	while (ft_is_space(str[i]))
		i++;
	signal = 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			signal = -signal;
	res = 0;
	base_len = ft_lookup_inic(lookup, base);
	while (lookup[(unsigned char)str[i]] != -1)
		res = res * base_len + lookup[(unsigned char)str[i++]];
	return (res * signal);
}
