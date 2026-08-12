/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 05:43:02 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 05:57:16 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

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

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*begin_list;

	if (strs == NULL || size <= 0)
	{
		return (NULL);
	}
	i = 0;
	begin_list = NULL;
	while (i < size)
	{
		ft_list_push_front(&begin_list, strs[i]);
		i++;
	}
	return (begin_list);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*strs[] = {"Lucas", "42", "Piscine"};
	t_list	*list;
	t_list	*current;

	list = ft_list_push_strs(3, strs);
	current = list;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->data);
		current = current->next;
	}
	return (0);
}*/
