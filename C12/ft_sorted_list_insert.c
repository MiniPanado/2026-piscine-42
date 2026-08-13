#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;
	t_list	*current;
	t_list	*prev;

	if (!begin_list || !cmp)
		return ;
	new = ft_create_elem(data);
	if (!new)
		return ;
	// Caso 1: lista vazia
	if (!*begin_list)
	{
		*begin_list = new;
		return ;
	}
	// Caso 2: inserir no início (novo dado é menor que a cabeça)
	if (cmp(data, (*begin_list)->data) < 0)
	{
		new->next = *begin_list;
		*begin_list = new;
		return ;
	}
	// Caso 3: percorrer a lista para encontrar a posição correta
	current = *begin_list;
	prev = NULL;
	while (current && cmp(data, current->data) >= 0)
	{
		prev = current;
		current = current->next;
	}
	// Inserir entre prev e current
	prev->next = new;
	new->next = current;
}