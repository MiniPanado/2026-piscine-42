/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 04:00:00 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 04:32:55 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	if (begin_list == NULL)
	{
		return ;
	}
	node = ft_create_elem(data);
	if (node == NULL)
	{
		return ;
	}
	node->next = *begin_list;
	*begin_list = node;
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*list = NULL;
	int		x = 42, y = -42;

	ft_list_push_front(&list, &x);
	ft_list_push_front(&list, &y);
	printf("%d\n", *(int *)(list->data));
	printf("%d\n", *(int *)(list->next->data));
}*/
