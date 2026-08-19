/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 01:16:16 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/10 10:53:19 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H

# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h> 
# include <stdbool.h>
# include <fcntl.h>

int		ft_put_error(const char *str);
bool	ft_display_file(int fd);

# define BUFFER_SIZE 4096

# define NO_ARGUMENT_MSG "File name missing.\n"
# define MANY_ARGUMENT_MSG "Too many arguments.\n"
# define FILE_NOT_READ_MSG "Cannot read file.\n"

#endif
