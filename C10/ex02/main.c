/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 04:26:13 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 14:47:21 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static int	ft_print_open_error(const char *prog_name,
		const char *filename, size_t len)
{
	const char	*err_msg = strerror(errno);

	write(STDERR_FILENO, prog_name, len);
	write(STDERR_FILENO, ": cannot open \'", 15);
	write(STDERR_FILENO, filename, ft_strlen(filename));
	write(STDERR_FILENO, "\' for reading: ", 15);
	write(STDERR_FILENO, err_msg, ft_strlen(err_msg));
	write(STDERR_FILENO, "\n", 1);
	return (EXIT_FAILURE);
}

static int	ft_print_read_error(const char *prog_name,
		const char *filename, size_t len)
{
	const char	*err_msg = strerror(errno);

	write(STDERR_FILENO, prog_name, len);
	write(STDERR_FILENO, ": error reading \'", 17);
	write(STDERR_FILENO, filename, ft_strlen(filename));
	write(STDERR_FILENO, "\': ", 3);
	write(STDERR_FILENO, err_msg, ft_strlen(err_msg));
	write(STDERR_FILENO, "\n", 1);
	return (EXIT_FAILURE);
}

static int	ft_print_usage_error(const char *prog_name, size_t len)
{
	write(STDERR_FILENO, prog_name, len);
	write(STDERR_FILENO, ": usage: ", 9);
	write(STDERR_FILENO, prog_name, len);
	write(STDERR_FILENO, " -c number [file]\n", 18);
	return (EXIT_FAILURE);
}

static int	ft_process_file(const char *prog_name, int *count,
		const char *filename, size_t n)
{
	int	fd;

	if (ft_strcmp("-", filename) == 0)
		fd = STDIN_FILENO;
	else
		fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_print_open_error(prog_name, filename, ft_strlen(prog_name));
		return (EXIT_FAILURE);
	}
	ft_print_header(*count, filename);
	if (ft_display_file(fd, n) == false)
	{
		if (fd > 0)
			close(fd);
		ft_print_read_error(prog_name, filename, ft_strlen(prog_name));
		return (-42);
	}
	(*count)++;
	if (fd > 0)
		close(fd);
	return (EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	const char		*prog_name = basename(argv[0]);
	const size_t	program_len = ft_strlen(prog_name);
	int				i;
	size_t			n;
	int				count;

	count = -1;
	if (argc < 3 || ft_strcmp(argv[1], "-c") != 0
		|| ft_str_is_numeric(argv[2]) == false)
		return (ft_print_usage_error(prog_name, program_len));
	n = ft_atol(argv[2]);
	if (n == 0)
		return (EXIT_SUCCESS);
	if (argc == 3)
		return (ft_process_file(prog_name, &count, "-", n));
	i = 3;
	if (argc > 4)
		count = 0;
	while (i < argc)
	{
		if (ft_process_file(prog_name, &count, argv[i], n) == -42)
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
