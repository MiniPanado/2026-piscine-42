/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 01:43:41 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 14:10:05 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static bool	ft_is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static bool	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

size_t	ft_atol(const char *str)
{
	size_t	i;
	size_t	result;

	i = 0;
	result = 0;
	while (ft_is_space(str[i]))
	{
		i++;
	}
	while (ft_is_digit(str[i]))
	{
		result = result * 10 + (size_t)(str[i++] - '0');
	}
	return (result);
}
