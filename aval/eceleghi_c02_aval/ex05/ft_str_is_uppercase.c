/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eceleghi <eceleghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 10:18:57 by eceleghi          #+#    #+#             */
/*   Updated: 2026/08/09 14:56:00 by eceleghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*  int main (void)
{
	char str[40] = "shkj0000dkf";
	
	printf("%d", ft_str_is_uppercase(str));
} */
