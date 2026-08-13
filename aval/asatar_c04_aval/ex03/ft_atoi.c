/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asatar <asatar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:53:57 by asatar            #+#    #+#             */
/*   Updated: 2026/08/09 16:25:06 by asatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdio.h> */

int	ft_atoi(char *str)
{
	int	i;
	int	signs;
	int	result;
	int	s;

	i = 0;
	s = 0;
	signs = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (s % 2 != 0)
		signs = -1;
	return (result * signs);
}
/* int main(void)
{
	printf("Test 1: %d\n", ft_atoi(" ---+--+1234ab567"));
	printf("Test 2: %d\n", ft_atoi("   \t\n -42"));
	printf("Test 3: %d\n", ft_atoi("+0"));
	printf("Test 4: %d\n", ft_atoi("words before 123"));
	return (0);
} */