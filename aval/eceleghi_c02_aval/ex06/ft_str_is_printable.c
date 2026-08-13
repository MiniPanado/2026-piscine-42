/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eceleghi <eceleghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 14:00:55 by eceleghi          #+#    #+#             */
/*   Updated: 2026/08/09 14:54:46 by eceleghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main (void)
{
	char str[40] = "\ajaaaaaa";
	
	printf("%d", ft_str_is_printable(str));
} */