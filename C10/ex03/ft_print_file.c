/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 19:51:38 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 02:19:44 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

static void	ft_print_error(char *path)
{
	write(2, "ft_hexdump: ", 12);
	write(2, path, ft_strlen(path));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}

bool	ft_read_fd(int fd, char *buffer, t_hexdump *hd)
{
	ssize_t	bytes_read;
	char	read_buf[16];
	ssize_t	i;

	bytes_read = read(fd, read_buf, 16);
	while (bytes_read > 0)
	{
		i = 0;
		while (i < bytes_read)
		{
			buffer[hd->buf_size] = read_buf[i];
			hd->buf_size++;
			if (hd->buf_size == 16)
			{
				ft_print_line(buffer, 16, hd);
				hd->offset += 16;
				hd->buf_size = 0;
			}
			i++;
		}
		bytes_read = read(fd, read_buf, 16);
	}
	return (bytes_read != -1);
}

bool	ft_process_file(char *path, char *buffer, t_hexdump *hd)
{
	int		fd;
	bool	read_ok;

	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		ft_print_error(path);
		return (false);
	}
	read_ok = ft_read_fd(fd, buffer, hd);
	if (!read_ok)
		ft_print_error(path);
	close(fd);
	return (read_ok);
}
