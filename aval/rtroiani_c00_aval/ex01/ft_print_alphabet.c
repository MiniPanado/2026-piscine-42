/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtroiani <rtroiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:58:50 by rtroiani          #+#    #+#             */
/*   Updated: 2026/08/03 13:04:14 by rtroiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	l;

	l = 'a';
	while (l <= 'z')
	{
		write(1, &l, 1);
		l++;
	}
}
// int main(void)
// {
// 	ft_print_alphabet();
// 	write(1, "\n", 1);
// 	return 0;
// }