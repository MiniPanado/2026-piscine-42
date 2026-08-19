/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 01:44:47 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 14:13:18 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static bool	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

bool	ft_str_is_numeric(const char *str)
{
	size_t	i;

	if (str[0] == '\0')
		return (false);
	i = 0;
	while (*(str + i))
	{
		if (ft_is_digit(*(str + i)) == false)
		{
			return (false);
		}
		i++;
	}
	return (true);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
