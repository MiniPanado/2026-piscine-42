/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:39:27 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 14:51:18 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
			void *data_ref, int (*cmp)(void *, void *))
{
	void	*data;

	while (begin_list != NULL)
	{
		data = begin_list->data;
		if (cmp(data, data_ref) == 0)
		{
			(*f)(data);
		}
		begin_list = begin_list->next;
	}
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void	print_data(void *data)
{
	printf("%s\n", (char *)data);
}

static int	cmp_data(void *data, void *data_ref)
{
	return (strcmp((char *)data, (char *)data_ref));
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
	node3->data = "Hello";

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_list_foreach_if(node1, &print_data, "Hello", &cmp_data);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
