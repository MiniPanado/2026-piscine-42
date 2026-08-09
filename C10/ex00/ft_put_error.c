/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 02:09:41 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/09 02:18:41 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_put_error(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(STDERR_FILENO, str, i);
}
