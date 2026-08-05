/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:23:04 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/04 22:04:12 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

static size_t	ft_strslen(char **strs, size_t sep_len)
{
	size_t	i;

	i = 0;
	while ()
	{
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
}
