/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 02:09:41 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/10 10:54:01 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	ft_put_error(const char *error_msg)
{
	ssize_t	bytes_written;
	size_t	len;

	len = 0;
	while (error_msg[len] != '\0')
	{
		len++;
	}
	bytes_written = write(STDERR_FILENO, error_msg, len);
	if (bytes_written == -1)
	{
		return (EOF);
	}
	return (bytes_written);
}
