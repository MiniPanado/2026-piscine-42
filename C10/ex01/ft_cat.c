/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 01:25:24 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/10 03:04:09 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

bool	ft_cat(int fd)
{
	ssize_t	bytes_read;
	char	buffer[BUFFER_SIZE];

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		if (write(STDOUT_FILENO, buffer, bytes_read) == -1)
		{
			return (false);
		}
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
	{
		return (false);
	}
	return (true);
}
