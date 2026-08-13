/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnatal-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:45:37 by jnatal-e          #+#    #+#             */
/*   Updated: 2026/08/03 17:54:38 by jnatal-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main()
// {
// 	char	str1[] = "AD";
// 	char	str2[] = "abcdamazon1a";
// 	printf("%d\n", ft_str_is_alpha(str1));
// 	printf("%d\n", ft_str_is_alpha(str2));
// 	return 0;
// }