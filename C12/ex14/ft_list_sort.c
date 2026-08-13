/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 06:14:30 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 15:25:25 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>
#include <stdbool.h>

static void	ft_swap(void **data1, void **data2)
{
	void	*temp;

	temp = *data1;
	*data1 = *data2;
	*data2 = temp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	bool	swaped;

	if (begin_list == NULL || cmp == NULL)
		return ;
	while (1)
	{
		swaped = false;
		current = *begin_list;
		while (current != NULL && current->next != NULL)
		{
			if (cmp(current->data, current->next->data) > 0)
			{
				ft_swap(&current->data, &current->next->data);
				swaped = true;
			}
			current = current->next;
		}
		if (swaped == false)
			break ;
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
