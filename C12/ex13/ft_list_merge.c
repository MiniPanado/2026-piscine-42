/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 06:14:30 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 15:14:07 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	if (begin_list1 == NULL || begin_list2 == NULL)
		return ;
	current = *begin_list1;
	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}
	if (current == NULL)
		*begin_list1 = begin_list2;
	else
		current->next = begin_list2;
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
