/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 02:09:33 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/09 02:09:34 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		ft_put_error(NO_ARGUMENT_MSG);
		return (1);
	}
	if (argc >= 3)
	{
		ft_put_error(MANY_ARGUMENT_MSG);
		return (1);
	}
	if (ft_display_file(argv[1]) == false)
	{
		return (1);
	}
	return (0);
}
