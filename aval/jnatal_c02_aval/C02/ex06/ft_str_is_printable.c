/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnatal-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 21:03:47 by jnatal-e          #+#    #+#             */
/*   Updated: 2026/08/03 21:05:59 by jnatal-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main ()
// {
//     char str1[] = "show exclamation mark!";
//     char str2[] = "asd\x0Athis dont printable";
//     char str3[] = "";
//     printf("%d\n", ft_str_is_printable(str1));
//     printf("%d\n", ft_str_is_printable(str2));
//     printf("%d\n", ft_str_is_printable(str3));
//     return 0;
// }