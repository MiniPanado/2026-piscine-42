/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:47:23 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 02:15:46 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

static void	ft_init_hd(t_hexdump *hd)
{
	hd->offset = 0;
	hd->buf_size = 0;
	hd->option_c = false;
	hd->has_prev = false;
	hd->same_printed = false;
}

static void	ft_flush_buffer(char *buffer, t_hexdump *hd)
{
	if (hd->buf_size > 0)
	{
		ft_print_line(buffer, hd->buf_size, hd);
		hd->offset += hd->buf_size;
	}
	if (hd->offset > 0 || hd->buf_size > 0)
	{
		ft_print_offset(hd->offset, hd->option_c);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int			i;
	char		buffer[16];
	int			exit_code;
	t_hexdump	hd;

	ft_init_hd(&hd);
	i = 1;
	exit_code = EXIT_SUCCESS;
	if (argc > 1 && ft_strcmp("-C", argv[1]) == 0)
	{
		hd.option_c = true;
		i++;
	}
	if (i == argc)
		ft_read_fd(0, buffer, &hd);
	while (i < argc)
	{
		if (!ft_process_file(argv[i++], buffer, &hd))
			exit_code = EXIT_FAILURE;
	}
	ft_flush_buffer(buffer, &hd);
	return (exit_code);
}
