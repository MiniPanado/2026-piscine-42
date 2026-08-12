/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 05:59:41 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 06:13:35 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temp;

	while (begin_list != NULL)
	{
		temp = begin_list->next;
		free_fct(begin_list->data);
		free(begin_list);
		begin_list = temp;
	}
}

/*#include <stdio.h>

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

	list = NULL;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	c = malloc(sizeof(int));
	*a = 42;
	*b = -42;
	*c = 0;

	ft_list_push_front(&list, a);
	ft_list_push_front(&list, b);
	ft_list_push_front(&list, c);

	printf("Before Clear:\n");
	print_list(list);

	ft_list_clear(list, free_data);

	printf("List Cleared.\n");
	return (0);
}*/
