/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eceleghi <eceleghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 10:18:57 by eceleghi          #+#    #+#             */
/*   Updated: 2026/08/07 10:04:27 by eceleghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9' )))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main (void)
{
	char str[40] = "000";
	
	printf("%d", ft_str_is_numeric(str));
} */