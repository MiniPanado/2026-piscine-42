/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 01:54:16 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 03:17:50 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

static bool	ft_is_op(char *str, char ops[5])
{
	int	i;

	if (str[1] != '\0')
		return (false);
	i = 0;
	while (i < 5)
	{
		if (str[0] == ops[i])
			return (true);
		i++;
	}
	return (false);
}

static void	ft_inic_operators(int (*f_operators[5])(int, int), char ops[5])
{
	f_operators[0] = ft_add;
	f_operators[1] = ft_subtract;
	f_operators[2] = ft_divide;
	f_operators[3] = ft_multiply;
	f_operators[4] = ft_modulo;
	ops[0] = '+';
	ops[1] = '-';
	ops[2] = '/';
	ops[3] = '*';
	ops[4] = '%';
}

int	main(int argc, char **argv)
{
	int		(*f_operators[5])(int, int);
	char	ops[5];

	ft_inic_operators(f_operators, ops);
	if (argc != 4)
		return (EXIT_FAILURE);
	if (ft_is_op(argv[2], ops) == false)
	{
		ft_putnbr(0);
		write(1, "\n", 1);
		return (EXIT_FAILURE);
	}
	ft_do_op(f_operators, ops, argv);
	return (EXIT_SUCCESS);
}
