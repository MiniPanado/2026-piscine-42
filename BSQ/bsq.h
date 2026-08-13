/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 16:57:26 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 22:58:09 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <fcntl.h>
# include <limits.h>

# define CHUNK 4096

typedef struct s_map
{
	char	empty;
	char	obstacle;
	char	full;
	int		rows;
	int		cols;
	char	**grid;
	int		**dp;
	int		best_size;
	int		best_row;
	int		best_col;
}	t_map;

/* ---------- read_input.c ---------- */
char	*read_file_content(const char *filename);
char	*read_stdin_content(void);

/* ---------- parsing.c ---------- */
int		parse_map(const char *content, t_map *map);

/* ---------- validation.c ---------- */
bool	validate_map_body(const char *content, int start, t_map *map);

/* ---------- algorithm.c ---------- */
void	build_dp(t_map *map);
void	find_best_square(t_map *map);

/* ---------- output.c ---------- */
void	apply_square(t_map *map);
void	print_map(t_map *map);
void	print_error(void);

/* ---------- memory.c ---------- */
int		alloc_map(t_map *map);
void	free_map(t_map *map);
void	copy_grid(const char *content, int start, t_map *map);

/* ---------- utils.c ---------- */
bool	ft_is_digit(char c);
int		ft_atoi_len(const char *str, int len);
void	*ft_memset(void *s, int c, unsigned long n);

#endif
