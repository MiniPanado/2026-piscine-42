/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 01:38:11 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/31 01:12:00 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

// 9  == '\t' && 13 == '\r'

static bool	ft_is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	if (!str)
		return (0);
	i = 0;
	while (ft_is_space(str[i]))
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -sign;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i++] - '0');
	}
	return (res * sign);
}

//A way to handle overflow and underflow
/*#define INT_MIN_NUMBER 2147483648
#define INT_MAX_NUMBER 2147483647

if ((sign == -1 && res <= INT_MIN_NUMBER)
	|| (sign == 1 && res <= INT_MAX_NUMBER))
	return (res * sign);*/

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	argv++;
	argc--;
	for (int i = 0; i < argc; i++)
		printf("%d\n", ft_atoi(argv[i]));
	return (0);
}*/
