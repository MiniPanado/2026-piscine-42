/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:32:31 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 22:22:33 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void	solve_and_print(t_map *map)
{
	build_dp(map);
	find_best_square(map);
	apply_square(map);
	print_map(map);
	free_map(map);
}

static void	process_file(const char *filename, bool use_stdin,
		bool print_sep, int *exit_code)
{
	char	*content;
	t_map	map;

	if (use_stdin)
		content = read_stdin_content();
	else
		content = read_file_content(filename);
	if (print_sep)
		write(1, "\n", 1);
	if (content == NULL)
	{
		print_error();
		*exit_code = EXIT_FAILURE;
		return ;
	}
	ft_memset(&map, 0, sizeof(t_map));
	if (parse_map(content, &map) == -1)
		*exit_code = EXIT_FAILURE;
	else
		solve_and_print(&map);
	free(content);
}

int	main(int argc, char **argv)
{
	int	i;
	int	exit_code;

	exit_code = EXIT_SUCCESS;
	if (argc == 1)
		process_file(NULL, true, false, &exit_code);
	else
	{
		i = 1;
		while (i < argc)
		{
			process_file(argv[i], false, (i > 1), &exit_code);
			i++;
		}
	}
	return (exit_code);
}
