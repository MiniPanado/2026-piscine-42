/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 20:03:00 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/02 18:59:15 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_parsing_valid(char *str);
bool	rush01(const char *str);
void	print_error(void);

int	main(int argc, char **argv)
{
	if (argc != 2 || is_parsing_valid(argv[1]) == false)
	{
		print_error();
		return (1);
	}
	if (rush01(argv[1]) == false)
	{
		print_error();
		return (1);
	}
	return (0);
}
