#include "ft_list.h"

static void ft_swap_data(void **a, void **b)
{
void *temp;

temp = *a;
*a = *b;
*b = temp;
}

void ft_list_reverse_fun(t_list *begin_list)
{
t_list *left;
t_list *right;
size_t size;
size_t i;
size_t j;

if (!begin_list || !begin_list->next)
{
return;
}
size = 0;
left = begin_list;
right = begin_list;
while (right != NULL)
{
size++;
right = right->next;
}
while (i < size / 2)
{
right = begin_list;
j = 0;
while (j < (size - 1) - i)
{
right = right->next;
j++;
}
ft_swap_data(&left->data, &right->data);
}
left = left->next;
i++;
}