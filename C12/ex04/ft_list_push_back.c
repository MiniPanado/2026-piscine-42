/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 04:00:00 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 05:41:25 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

static t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list == NULL)
	{
		return (begin_list);
	}
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*final_list;

	if (begin_list == NULL)
	{
		return ;
	}
	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	final_list = ft_list_last(*begin_list);
	final_list->next = ft_create_elem(data);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*list = NULL;
	int		x = 42, y = -42, z = 0;

	ft_list_push_back(&list, &y);
	ft_list_push_back(&list, &x);
	ft_list_push_back(&list, &y);
	ft_list_push_back(&list, &z);
	ft_list_push_back(&list, &y);
	t_list	*last_element = ft_list_last(list);
	printf("Last Element: %d\n", *(int *)(last_element->data));
}*/
