/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 04:00:00 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 04:10:43 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(1 * sizeof(t_list));
	if (node == NULL)
	{
		return (NULL);
	}
	node->next = NULL;
	node->data = data;
	return (node);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	x = 42;

	t_list *node = ft_create_elem((void *)&x);
	if (!node)
		return (EXIT_FAILURE);
	printf("data: %d\n", *(int *)(node->data));
	printf("next: %p\n", node->next);
}*/
