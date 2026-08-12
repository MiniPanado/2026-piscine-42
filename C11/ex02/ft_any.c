/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 00:39:44 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 01:31:27 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_any(char **tab, int (*f)(char*))
{
	if (!tab || !f)
		return (0);
	while (*tab != NULL)
	{
		if (f(*tab) != 0)
		{
			return (1);
		}
		tab++;
	}
	return (0);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define LETTER 'z'

static void	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	write(1, str, i);
}

static void	ft_putnbr(int nb)
{
	unsigned int num;

	num = (nb < 0) ? -(unsigned int)nb : (unsigned int)nb;
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	write(1, &"0123456789"[num % 10], 1);
	write(1, " ", 1);
}

static int	ft_is_there(char *str)
{
	while (*str)
	{
		if (*str == LETTER || *str == (LETTER - 32))
			return (1);
		str++;
	}
	return (0);
}

int	main(void)
{
	char	**strs;
	int		i;

	strs = malloc(sizeof(char *) * 4);
	if (!strs)
		return (1);

	strs[0] = "Hello World!";
	strs[1] = "Hello 42!";
	strs[2] = "I HATE Born2beRoot";
	strs[3] = NULL;

	write(1, "----------------------------\nOg: ", 34);
	i = 0;
	while (strs[i])
	{
		ft_putstr(strs[i]);
		write(1, "\n", 1);
		i++;
	}

	write(1, "----------------------------\nResult: ", 38);
	ft_putnbr(ft_any(strs, &ft_is_there));
	write(1, "\n----------------------------\n", 30);

	free(strs);
	return (0);
}*/
