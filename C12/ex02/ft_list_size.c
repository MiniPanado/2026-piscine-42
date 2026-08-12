/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 04:00:00 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 04:39:15 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

int	ft_list_size(t_list *begin_list)
{
	int	size;

	if (begin_list == NULL)
	{
		return (0);
	}
	size = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*list = NULL;
	int		x = 42, y = -42;

	ft_list_push_front(&list, &x);
	ft_list_push_front(&list, &y);
	printf("Size: %d\n", ft_list_size(list));
}*/
