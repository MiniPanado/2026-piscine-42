/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 00:39:44 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 01:40:01 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	if (!tab || !f || length <= 0)
		return (0);
	i = 0;
	count = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
		{
			count++;
		}
		i++;
	}
	return (count);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define LETTER 'l'

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
	const int	size = 3;
	char		**strs;
	int			i;

	strs = malloc(sizeof(char *) * size);
	if (!strs)
		return (1);

	strs[0] = "Hello World!";
	strs[1] = "Hello 42!";
	strs[2] = "I HATE Born2beRoot";

	write(1, "----------------------------\nOg: ", 34);
	i = 0;
	while (i < size)
	{
		ft_putstr(strs[i]);
		write(1, "\n", 1);
		i++;
	}

	write(1, "----------------------------\nResult: ", 38);
	ft_putnbr(ft_count_if(strs, size, &ft_is_there));
	write(1, "\n----------------------------\n", 30);

	free(strs);
	return (0);
}*/
