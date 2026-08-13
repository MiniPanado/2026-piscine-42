/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltdomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 12:23:58 by eltdomin          #+#    #+#             */
/*   Updated: 2026/08/10 15:32:03 by eltdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	i = 0;
	while (dest[d] && d < size)
		d++;
	while (src[s])
		s++;
	if (d == size)
		return (size + s);
	while (src[i] && d + i + 1 < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	if (d + i < size)
		dest[d + i] = '\0';
	return (d + s);
}
