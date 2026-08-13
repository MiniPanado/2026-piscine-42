/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltdomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:50:38 by eltdomin          #+#    #+#             */
/*   Updated: 2026/08/10 12:16:06 by eltdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		a = 0;
		while (str[i + a] != '\0' && str[i + a] == to_find[a])
		{
			if (to_find[a + 1] == '\0')
				return (&str[i]);
			a++;
		}
		++i;
	}
	return (0);
}
