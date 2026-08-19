/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 18:38:46 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 02:13:50 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEXDUMP_H

# define HEXDUMP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>
# include <stdbool.h>

typedef struct s_hexdump
{
	size_t	offset;
	size_t	buf_size;
	bool	option_c;
	char	prev_buf[16];
	bool	has_prev;
	bool	same_printed;
}	t_hexdump;

size_t	ft_strlen(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	ft_print_offset(size_t offset, bool option_c);
void	ft_print_line(char *buffer, size_t size, t_hexdump *hd);
bool	ft_read_fd(int fd, char *buffer, t_hexdump *hd);
bool	ft_process_file(char *path, char *buffer, t_hexdump *hd);

#endif
