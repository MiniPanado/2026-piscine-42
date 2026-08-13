/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:49:54 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 22:43:05 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static bool	ft_is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

bool	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi_len(const char *str, int len)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_is_space(*(str + i)))
		i++;
	while (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign *= -1;
		i++;
	}
	while (ft_is_digit(*(str + i)) && i < len)
	{
		res = res * 10 + (str[i] - '0');
		if (res > INT_MAX)
			res = INT_MAX;
		i++;
	}
	return ((int)(res * sign));
}

void	*ft_memset(void *s, int c, unsigned long n)
{
	unsigned long	i;
	unsigned char	*str;
	unsigned char	uc;

	i = 0;
	str = (unsigned char *)s;
	uc = (unsigned char)c;
	while (i < n)
	{
		str[i] = uc;
		i++;
	}
	return (s);
}
