/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 06:14:30 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 14:38:03 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*previous;
	t_list	*current;
	t_list	*following;

	previous = NULL;
	current = *begin_list;
	following = *begin_list;
	while (current != NULL)
	{
		following = following->next;
		current->next = previous;
		previous = current;
		current = following;
	}
	*begin_list = previous;
}

/*#include <stdio.h>
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list	*ft_create_elem(void *data);

void	free_data(void *data)
{
	free(data);
}

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%d\n", *(int *)list->data);
		list = list->next;
	}
}

int	main(void)
{
	t_list	*list;
	int		*a;
	int		*b;
	int		*c;
	int		*d;

	list = NULL;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	c = malloc(sizeof(int));
	d = malloc(sizeof(int));
	*a = 42;
	*b = -42;
	*c = 0;
	*d = 666;

	ft_list_push_front(&list, a);
	ft_list_push_front(&list, b);
	ft_list_push_front(&list, c);
	ft_list_push_front(&list, d);

	printf("Before Reverse:\n");
	print_list(list);
	printf("After Reverse:\n");
	ft_list_reverse(&list);
	print_list(list);

	ft_list_clear(list, free_data);

	printf("List Cleared.\n");
	return (0);
}*/
