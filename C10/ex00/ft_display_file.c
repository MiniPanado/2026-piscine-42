/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 01:12:41 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/09 02:23:25 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

bool	ft_display_file(char *file)
{
	int		fd;
	int		num_of_bytes;
	char	buffer[BUFFER_SIZE];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_put_error(FILE_NOT_READ_MSG);
		return (false);
	}
	num_of_bytes = read(fd, buffer, BUFFER_SIZE);
	while (num_of_bytes > 0)
	{
		write(STDOUT_FILENO, buffer, num_of_bytes);
		num_of_bytes = read(fd, buffer, BUFFER_SIZE);
	}
	if (num_of_bytes == -1)
	{
		close(fd);
		ft_put_error(FILE_NOT_READ_MSG);
		return (false);
	}
	close(fd);
	return (true);
}
