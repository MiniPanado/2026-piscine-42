/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 01:12:41 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/11 01:12:56 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

bool	ft_display_file(int fd)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	num_of_bytes;

	num_of_bytes = read(fd, buffer, sizeof(buffer));
	while (num_of_bytes > 0)
	{
		if (write(STDOUT_FILENO, buffer, num_of_bytes) == -1)
		{
			return (false);
		}
		num_of_bytes = read(fd, buffer, sizeof(buffer));
	}
	if (num_of_bytes == -1)
		return (false);
	return (true);
}
