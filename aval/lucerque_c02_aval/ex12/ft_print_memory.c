/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:57:46 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/27 19:12:04 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>
#include <stdbool.h>

#define BASE "0123456789abcdef"
#define BUFFER_SIZE 75

static bool	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

static void	ft_get_address(
		uintptr_t address,
		unsigned char *buffer,
		unsigned int *len)
{
	int	i;

	i = 16;
	while (--i >= 0)
	{
		buffer[(*len)++] = BASE[(address >> (4 * i)) & 0xf];
	}
	buffer[(*len)++] = ':';
	buffer[(*len)++] = ' ';
}

static void	ft_get_hex(
		unsigned char *str,
		unsigned int size,
		unsigned char *buffer,
		unsigned int *len)
{
	unsigned int	i;
	unsigned int	total_char;

	i = 0;
	total_char = *len;
	while (i < size)
	{
		buffer[(*len)++] = BASE[(str[i] >> 4) & 0xf];
		buffer[(*len)++] = BASE[str[i] & 0xf];
		if ((i + 1) % 2 == 0)
		{
			buffer[(*len)++] = ' ';
		}
		i++;
	}
	total_char = *len - total_char;
	while (total_char < 40)
	{
		buffer[(*len)++] = ' ';
		total_char++;
	}
}

static void	ft_getstr_non_printable(
		unsigned char *str,
		unsigned int size,
		unsigned char *buffer,
		unsigned int *len)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (ft_is_printable(str[i]))
		{
			buffer[(*len)++] = str[i];
		}
		else
		{
			buffer[(*len)++] = '.';
		}
		i++;
	}
	buffer[(*len)++] = '\n';
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*str;
	unsigned char	buffer[BUFFER_SIZE];
	unsigned int	offset;
	unsigned int	line_size;
	unsigned int	len;

	if (size == 0)
		return (addr);
	str = (unsigned char *)addr;
	offset = 0;
	while (size > 0)
	{
		len = 0;
		line_size = 16;
		if (size <= 16)
			line_size = size;
		ft_get_address((uintptr_t)(str + offset), buffer, &len);
		ft_get_hex((str + offset), line_size, buffer, &len);
		ft_getstr_non_printable((str + offset), line_size, buffer, &len);
		write(1, buffer, len);
		size -= line_size;
		offset += line_size;
	}
	return (addr);
}

int	main(void)
{
	char	*str = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";

	ft_print_memory((void *)str, 92);
}
