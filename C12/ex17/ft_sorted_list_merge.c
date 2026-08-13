/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:35:57 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 20:39:26 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	insert_before(t_list **current1, t_list **current2)
{
	t_list	*next2;

	next2 = (*current2)->next;
	(*current2)->next = *current1;
	*current1 = *current2;
	*current2 = next2;
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list	**current1;
	t_list	*current2;

	if (!begin_list1 || !cmp || !begin_list2)
		return ;
	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	current1 = begin_list1;
	current2 = begin_list2;
	while (*current1 && current2)
	{
		if (cmp(current2->data, (*current1)->data) < 0)
			insert_before(current1, &current2);
		current1 = &(*current1)->next;
	}
	if (current2)
		*current1 = current2;
}
