/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 01:54:01 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/30 02:13:19 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

#define ASCII_SIZE 256

static unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

static bool	ft_base_is_valid(char *base)
{
	int		i;
	short	freq[ASCII_SIZE];

	if (!base || *base == '\0' || base[1] == '\0')
		return (false);
	i = 0;
	while (i < ASCII_SIZE)
		freq[i++] = 0;
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] < ' ' || base[i] > '~'))
			return (false);
		if (++freq[(unsigned char)base[i]] > 1)
			return (false);
		i++;
	}
	return (true);
}

static void	ft_putnbr_recursive(
		unsigned int number,
		char *base,
		unsigned int base_len)
{
	if (number >= base_len)
	{
		ft_putnbr_recursive((number / base_len), base, base_len);
	}
	write(1, &base[number % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	number;

	if (!base || !ft_base_is_valid(base))
	{
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		number = -(unsigned int)nbr;
	}
	else
	{
		number = (unsigned int)nbr;
	}
	ft_putnbr_recursive(number, base, ft_strlen(base));
}

/*#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	argv++;
	argc--;
	ft_putnbr_base(atoi(argv[0]), argv[1]);
	write(1, "\n", 1);
}*/
