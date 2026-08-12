/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:39:27 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 14:43:29 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != NULL)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

/*#include <stdio.h>
#include <stdlib.h>

static void	print_data(void *data)
{
	printf("%s\n", (char *)data);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	node1->data = "Hello";
	node2->data = "World";
	node3->data = "42";

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_list_foreach(node1, &print_data);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
