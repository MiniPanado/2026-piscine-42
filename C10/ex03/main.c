/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:47:23 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 18:29:18 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int main(int argc, char **argv)
{
	int		i;
	bool	available_option;
	size_t	offset;
	int		exit_code;

	if (argc < 2 || (argc == 2 && ft_strcmp("-C", argv[1]) == 0))
	{
		return (EXIT_FAILURE);
	}
	exit_code = EXIT_SUCCESS;
	i = 1;
	offset = 0;
	available_option = false;
	if (ft_strcmp("-C", argv[1]))
	{
		i++;
		available_option = true;
	}
	while (i < argc)
	{
		exit_code = ft_print_file(argv[i], available_option, &offset);
		i++;
	}
	ft_print_offset(offset);
	write(1, "\n", 1);
	return (exit_code);
}
