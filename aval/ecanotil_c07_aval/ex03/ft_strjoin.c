/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanotil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 19:25:19 by ecanotil          #+#    #+#             */
/*   Updated: 2026/08/06 13:12:26 by ecanotil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_totalsize(char **strs, int size, char *sep)
{
	int	i;
	int	total_len;
	int	sep_len;

	sep_len = str_len(sep);
	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len = total_len + str_len(strs[i]);
		i++;
	}
	return (total_len = total_len + sep_len * (size - 1) + 1);
}

char	*strcopy(char *strs, char *strs_joined)
{
	while (*strs != '\0')
	{
		*strs_joined = *strs;
		strs++;
		strs_joined++;
	}
	*strs_joined = '\0';
	return (strs_joined);
}

char	*ft_emptystr(void)
{
	char	*strs_joined;

	strs_joined = malloc(1);
	if (strs_joined)
		*strs_joined = '\0';
	return (strs_joined);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strs_joined;
	char	*start;
	int		i;
	int		total_len;

	if (size <= 0)
		return (ft_emptystr());
	total_len = ft_totalsize(strs, size, sep);
	strs_joined = malloc(total_len * sizeof(char));
	if (!strs_joined)
		return (0);
	i = 0;
	start = strs_joined;
	while (i < size)
	{
		strs_joined = strcopy(strs[i], strs_joined);
		if (i < size - 1)
			strs_joined = strcopy(sep, strs_joined);
		i++;
	}
	return (start);
}
/*
int	main(void)
{
	char	*strs[3] = {"you", "need", "help!"};
	char 	*sep = ", ";
	char	*fail;

	fail = ft_strjoin(0, strs, sep);
	printf("%s\n", fail);
	free(fail);
	printf("%s\n", ft_strjoin(3, strs, sep));
	return (0);
}
*/
