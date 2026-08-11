/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 02:09:33 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 00:53:41 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	int	fd;

	if (argc <= 1)
	{
		ft_put_error(NO_ARGUMENT_MSG);
		return (EXIT_FAILURE);
	}
	if (argc >= 3)
	{
		ft_put_error(MANY_ARGUMENT_MSG);
		return (EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1 || ft_display_file(fd) == false)
	{
		ft_put_error(FILE_NOT_READ_MSG);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
