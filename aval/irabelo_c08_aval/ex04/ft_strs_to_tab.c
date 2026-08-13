/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 13:04:04 by irabelo           #+#    #+#             */
/*   Updated: 2026/08/09 17:24:28 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strlcpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
}

void	ft_free_result(struct s_stock_str *result, int i)
{
	int	j;

	j = 0;
	while (j < i)
		free(result[j++].copy);
	free(result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*result;
	int					i;

	result = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!result)
		return (NULL);
	result[ac].str = NULL;
	i = 0;
	while (i < ac)
	{
		result[i].str = av[i];
		result[i].size = ft_strlen(result[i].str);
		result[i].copy = malloc(result[i].size + 1);
		if (!result[i].copy)
		{
			ft_free_result(result, i);
			return (NULL);
		}
		ft_strlcpy(result[i].copy, result[i].str, result[i].size + 1);
		i++;
	}
	return (result);
}
