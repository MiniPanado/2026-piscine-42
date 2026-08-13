/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 10:29:02 by marisous          #+#    #+#             */
/*   Updated: 2026/08/13 10:32:50 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define TRUE 1
#define FALSE 0
#define SUCCESS 1
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

#define EVEN(nbr) ((nbr) % 2 == 0)

typedef int	t_bool;

t_bool	ft_is_even(int nbr);
