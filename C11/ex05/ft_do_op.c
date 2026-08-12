/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 02:47:16 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 03:07:28 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_do_op(int (*f_operators[5])(int, int), char ops[5], char **argv)
{
	int		a;
	int		b;
	char	op;
	int		i;

	a = ft_atoi(argv[1]);
	op = argv[2][0];
	b = ft_atoi(argv[3]);
	i = 0;
	while (i < 5)
	{
		if (ops[i] == op)
		{
			if (op == '/' && b == 0)
				return (ft_putstr(DIVIDE_ZERO_MSG));
			else if (op == '%' && b == 0)
				return (ft_putstr(MODULO_ZERO_MSG));
			ft_putnbr(f_operators[i](a, b));
			write(1, "\n", 1);
			return ;
		}
		i++;
	}
}
