/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:30:34 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 20:31:45 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_list	*ft_find_prev(t_list *lst, void *data, int (*cmp)())
{
	t_list	*prev;

	prev = NULL;
	while (lst && cmp(data, lst->data) >= 0)
	{
		prev = lst;
		lst = lst->next;
	}
	return (prev);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;
	t_list	*prev;

	if (!begin_list || !cmp)
		return ;
	new = ft_create_elem(data);
	if (!new)
		return ;
	if (!*begin_list || cmp(data, (*begin_list)->data) < 0)
	{
		new->next = *begin_list;
		*begin_list = new;
		return ;
	}
	prev = ft_find_prev(*begin_list, data, cmp);
	new->next = prev->next;
	prev->next = new;
}
