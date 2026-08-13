/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 18:03:57 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 20:30:03 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	ft_swap_data(void **a, void **b)
{
	void	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static size_t	ft_list_size(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

static t_list	*ft_list_at(t_list *lst, size_t index)
{
	while (index--)
		lst = lst->next;
	return (lst);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*left;
	t_list	*right;
	size_t	size;
	size_t	i;

	if (!begin_list || !begin_list->next)
		return ;
	size = ft_list_size(begin_list);
	left = begin_list;
	i = 0;
	while (i < size / 2)
	{
		right = ft_list_at(begin_list, size - 1 - i);
		ft_swap_data(&left->data, &right->data);
		left = left->next;
		i++;
	}
}
