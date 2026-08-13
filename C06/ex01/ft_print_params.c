/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 19:56:02 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/04 19:56:04 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

static void	ft_putstr(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (1);
	}
	while (*++argv != NULL)
	{
		ft_putstr(*argv);
	}
	return (0);
}
