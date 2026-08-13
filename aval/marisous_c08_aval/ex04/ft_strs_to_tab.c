/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 10:30:17 by marisous          #+#    #+#             */
/*   Updated: 2026/08/13 10:30:18 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);
t_stock_str	ft_create_line(char *str, int last);
int			ft_strlen(char *str);
void		clear_memory(int argc, t_stock_str *table);

int	ft_strlen(char *str)
{
	int	it;

	if (!str)
		return (0);
	it = 0;
	while (*str != '\0')
	{
		it++;
		str++;
	}
	return (it);
}

t_stock_str	ft_create_line(char *str, int last)
{
	t_stock_str	line;

	line.size = ft_strlen(str);
	if (last)
	{
		line.copy = NULL;
		line.str = NULL;
		return (line);
	}
	line.str = malloc((1 + line.size) * sizeof(char));
	line.copy = malloc((1 + line.size) * sizeof(char));
	while (*str != '\0')
	{
		*line.str = *str;
		*line.copy = *str;
		str++;
		line.str++;
		line.copy++;
	}
	*line.str = '\0';
	*line.copy = '\0';
	line.str -= line.size;
	line.copy -= line.size;
	return (line);
}

void	clear_memory(int argc, t_stock_str *table)
{
	while (argc > 0)
	{
		free(table[argc].str);
		free(table[argc].copy);
		argc--;
	}
	free(table);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*retval;
	int			i_arg;

	i_arg = 0;
	retval = malloc((ac + 1) * sizeof(t_stock_str));
	while (i_arg < ac)
	{
		retval[i_arg] = ft_create_line(*av, 0);
		i_arg++;
		av++;
	}
	retval[i_arg] = ft_create_line("\0", 1);
	return (retval);
}

/* int	main(int argc, char **argv) */
/* { */
/* 	int			index; */
/* 	t_stock_str	*test; */

/* 	if (argc < 2) */
/* 		return (0); */
/* 	test = ft_strs_to_tab(argc, argv); */
/* 	index = 0; */
/* 	printf("Address of test is [%p]\n", test); */
/* 	while (index < argc+1) */
/* 	{ */
/* 		printf("Size = [%d]\n", test[index].size); */
/* 		printf("str element is [%s]\n", test[index].str); */
/* 		printf("copy element is [%s]\n", test[index].copy); */
/* 		index++; */
/* 	} */
/* 	clear_memory(argc, test); */
/* 	printf("After memory clean test points to [%p]\n", test); */
/* 	printf("Now trying to access any element of test results in junk\n"); */
/* 	printf("Size test[0] = [%d]\n", test[0].size); */
/* 	printf("Or in a crash!\n test[0].str...\n"); */
/* 	printf("String test[0] = [%s]\n", test[0].str); */
/* 	return (0); */
/* } */
