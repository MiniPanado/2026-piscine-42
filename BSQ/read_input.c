/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 21:24:37 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 22:42:43 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static char	*grow_buffer(char *old, int old_size, int new_size)
{
	char	*new_buf;
	int		i;

	new_buf = malloc(new_size * sizeof(char));
	if (new_buf == NULL)
	{
		free(old);
		return (NULL);
	}
	i = 0;
	while (i < old_size)
	{
		new_buf[i] = old[i];
		i++;
	}
	free(old);
	return (new_buf);
}

static char	*read_chunk(int fd, char *buf, int *size, int *capacity)
{
	int	bytes_read;

	if (*size + CHUNK > *capacity)
	{
		*capacity *= 2;
		buf = grow_buffer(buf, *size, *capacity);
		if (buf == NULL)
			return (NULL);
	}
	bytes_read = read(fd, buf + *size, CHUNK);
	if (bytes_read < 0)
	{
		free(buf);
		return (NULL);
	}
	*size += bytes_read;
	return (buf);
}

static char	*read_all_fd(int fd)
{
	char	*buf;
	int		capacity;
	int		size;
	int		old_size;

	capacity = CHUNK;
	buf = malloc(capacity);
	if (!buf)
		return (NULL);
	size = 0;
	while (1)
	{
		old_size = size;
		buf = read_chunk(fd, buf, &size, &capacity);
		if (buf == NULL)
			return (NULL);
		if (size == old_size)
			break ;
	}
	buf = grow_buffer(buf, size, size + 1);
	if (buf == NULL)
		return (NULL);
	buf[size] = '\0';
	return (buf);
}

char	*read_file_content(const char *filename)
{
	int		fd;
	char	*content;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (NULL);
	}
	content = read_all_fd(fd);
	close(fd);
	return (content);
}

char	*read_stdin_content(void)
{
	return (read_all_fd(0));
}
