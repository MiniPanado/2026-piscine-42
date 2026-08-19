/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 01:12:41 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 14:13:48 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static bool	ft_print_window(char *window, size_t pos, size_t total, size_t n)
{
	bool	ok;

	ok = true;
	if (total < n)
	{
		if (write(STDOUT_FILENO, window, total) == -1)
			ok = false;
	}
	else
	{
		if (write(STDOUT_FILENO, &window[pos], (n - pos)) == -1)
			ok = false;
		if (write(STDOUT_FILENO, window, pos) == -1)
			ok = false;
	}
	return (ok);
}

static bool	ft_fill_window(int fd, char *window, size_t n, size_t *total)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;
	ssize_t	i;
	size_t	pos;

	pos = 0;
	*total = 0;
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		i = 0;
		while (i < bytes_read)
		{
			window[pos] = buffer[i++];
			pos = (pos + 1) % n;
			(*total)++;
		}
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
	{
		return (false);
	}
	return (ft_print_window(window, pos, *total, n));
}

bool	ft_display_file(int fd, size_t n)
{
	char	*window;
	size_t	total;
	bool	ok;

	window = malloc(sizeof(char) * n);
	if (window == NULL)
	{
		return (false);
	}
	ok = ft_fill_window(fd, window, n, &total);
	free(window);
	return (ok);
}
