/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 19:45:11 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/05 20:18:48 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

static bool	ft_abs(int num, unsigned int *number)
{
	if (num < 0)
	{
		*number = -(unsigned int)num;
		return (true);
	}
	*number = (unsigned int)num;
	return (false);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

static void	ft_reverse(char *str)
{
	size_t	left;
	size_t	right;
	char	temp;

	left = 0;
	right = ft_strlen(str) - 1;
	while (left < right)
	{
		temp = *(str + left);
		*(str + left) = *(str + right);
		*(str + right) = temp;
		left++;
		right--;
	}
}

char	*ft_itoa_base(int num, char *str, const char *base, size_t base_len)
{
	size_t			i;
	bool			is_negative;
	unsigned int	number;

	i = 0;
	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	is_negative = ft_abs(num, &number);
	while (number != 0)
	{
		str[i++] = base[number % base_len];
		number /= base_len;
	}
	if (is_negative)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	ft_reverse(str);
	return (str);
}
