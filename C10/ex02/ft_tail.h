/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 02:35:34 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 14:21:09 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H

# define FT_TAIL_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>
# include <stdbool.h>

# define BUFFER_SIZE 1024

size_t	ft_strlen(const char *str);
bool	ft_display_file(int fd, size_t n);
size_t	ft_atol(const char *str);
bool	ft_str_is_numeric(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_print_header(int i, const char *filename);

#endif
