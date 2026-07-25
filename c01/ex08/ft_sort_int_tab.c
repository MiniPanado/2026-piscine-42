/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:27:26 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/25 17:27:49 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - i - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>
int main() {
    int tab[] = { 2 ,6, 1, 5, 3, 4 };
    int size = sizeof(tab) / sizeof(tab[0]);

    // Perform bubble sort
      ft_sort_int_tab(tab,size);

    for (int i = 0; i < size; i++)
	{
        printf("%d ", tab[i]);
	}
	printf("\n");
    return 0;
}*/
