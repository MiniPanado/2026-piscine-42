/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:34:59 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/27 18:47:16 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

static int	ft_is_alphanumeric(char c)
{
	return (ft_is_alpha(c) || (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	first;
	int	i;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alphanumeric(str[i]))
		{
			if (first && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!first && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			first = 0;
		}
		else
			first = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
}
