/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 04:26:13 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 01:09:29 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

static void	ft_print_error(const char *program_name, char *str, size_t len)
{
	const char	*err_msg = strerror(errno);

	write(STDERR_FILENO, program_name, len);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, str, ft_strlen(str));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, err_msg, ft_strlen(err_msg));
	write(STDERR_FILENO, "\n", 1);
}

int	main(int argc, char **argv)
{
	const char		*program_name = basename(argv[0]);
	const size_t	program_len = ft_strlen(program_name);
	const char		*filename = "-";
	int				fd;
	int				exit_code;

	if (argc > 1)
		filename = *++argv;
	exit_code = EXIT_SUCCESS;
	while (filename != NULL)
	{
		if (filename[0] == '-' && filename[1] == '\0')
			fd = STDIN_FILENO;
		else
			fd = open(*argv, O_RDONLY);
		if (fd == -1 || ft_display_file(fd) == false)
		{
			ft_print_error(program_name, *argv, program_len);
			exit_code = EXIT_FAILURE;
		}
		if (fd > 0)
			close(fd);
		filename = *++argv;
	}
	return (exit_code);
}
