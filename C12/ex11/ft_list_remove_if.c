/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 06:14:30 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/13 03:57:36 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>
#include <stdlib.h>

static void	free_node(t_list *node, void (*free_fct)(void *))
{
	free_fct(node->data);
	free(node);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*current;
	t_list	*following;

	if (!begin_list || !data_ref || !cmp || !free_fct)
		return ;
	prev = NULL;
	current = *begin_list;
	following = *begin_list;
	while (current != NULL)
	{
		following = following->next;
		if (cmp(current->data, data_ref) == 0)
		{
			if (prev != NULL)
				prev->next = following;
			else
				*begin_list = following;
			free_node(current, free_fct);
		}
		else
			prev = current;
		current = following;
	}
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"


t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%s -> ", (char *)list->data);
		list = list->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*head;

	head = ft_create_elem(strdup("42"));
	head->next = ft_create_elem(strdup("Lisboa"));
	head->next->next = ft_create_elem(strdup("42"));
	head->next->next->next = ft_create_elem(strdup("Porto"));

	printf("--- Original List ---\n");
	print_list(head);

	ft_list_remove_if(&head, "42", strcmp, free);

	printf("\n--- List after Remove If (\"42\") ---\n");
	print_list(head);

	while (head)
	{
		t_list *tmp = head;
		head = head->next;
		free(tmp->data);
		free(tmp);
	}

	return (0);
}*/
