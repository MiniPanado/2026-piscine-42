/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 04:00:00 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 04:48:40 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

t_list	*ft_list_last(t_list *begin_list)
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

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*list = NULL;
	int		x = 42, y = -42, z = 0;

	ft_list_push_front(&list, &y);
	ft_list_push_front(&list, &x);
	ft_list_push_front(&list, &y);
	ft_list_push_front(&list, &z);
	t_list	*last_element = ft_list_last(list);
	printf("Last Element: %d\n", *(int *)(last_element->data));
}*/
