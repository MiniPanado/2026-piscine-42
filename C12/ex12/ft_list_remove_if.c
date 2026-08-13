/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 06:14:30 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 15:05:19 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*current;
	t_list	*following;

	if (begin_list == NULL || data_ref == NULL || cmp == NULL || !free_fct)
		return ;
	prev = NULL;
	current = *begin_list;
	while (current != NULL)
	{
		following = current->next;
		if (cmp(current->data, data_ref) == 0)
		{
			if (prev == NULL)
				*begin_list = following;
			else
				prev->next = following;
			free_fct(current->data);
			free(current);
		}
		else
			prev = current;
		current = following;
	}
}

/*#include "ft_list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	compare_str(void *a, void *b)
{
	return (strcmp((char *)a, (char *)b));
}

void	free_noop(void *data)
{
	(void)data;
}

void	print_list(t_list *lst)
{
	printf("[ ");
	while (lst != NULL)
	{
		printf("%s ", (char *)lst->data);
		lst = lst->next;
	}
	printf("]\n");
}

int	main(int argc, char **argv)
{
	t_list	*list;
	t_list	*elem;
	t_list	*last;
	int		i;

	if (argc < 3)
	{
		printf("use: %s <remove_value> <item1> <item2> ...\n", argv[0]);
		return (1);
	}
	list = NULL;
	last = NULL;
	i = 2;
	while (i < argc)
	{
		elem = malloc(sizeof(t_list));
		elem->data = argv[i];
		elem->next = NULL;
		if (list == NULL)
			list = elem;
		else
			last->next = elem;
		last = elem;
		i++;
	}
	printf("Before:  ");
	print_list(list);
	ft_list_remove_if(&list, argv[1], compare_str, free_noop);
	printf("After: ");
	print_list(list);
	return (0);
}*/
