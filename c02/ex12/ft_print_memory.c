#include <unistd.h>
#include <stdint.h>
#include <stdbool.h>

#define BASE "0123456789abcdef"
#define BUFFER_SIZE 40

static bool	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

static void	ft_print_address(uintptr_t address)
{
	int	i;

	i = 15;
	while (i >= 0)
	{
		write(1, &BASE[(address >> (4 * i)) & 0xf], 1);
		i--;
	}
	write(1, ": ", 2);
}

static void	ft_print_hex(unsigned char *str, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	char			buffer[BUFFER_SIZE];

	i = 0;
	len = 0;
	while (i < size)
	{
		buffer[len++] = BASE[(str[i] >> 4) & 0xf];
		buffer[len++] = BASE[str[i] & 0xf];
		if ((i + 1) % 2 == 0)
		{
			buffer[len++] = ' ';
		}
		i++;
	}
	while (len < 40)
	{
		buffer[len++] = ' ';
	}
	write(1, buffer, BUFFER_SIZE);
}

static void	ft_putstr_non_printable(unsigned char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (ft_is_printable(str[i]))
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, ".", 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*str;
	unsigned int	count;

	if (size == 0)
		return (addr);
	str = (unsigned char *)addr;
	count = 0;
	while (1)
	{
		ft_print_address((uintptr_t)(str + (16 * count)));
		if (size > 16)
		{
			ft_print_hex(str + (16 * count), 16);
			ft_putstr_non_printable(str + (16 * count), 16);
			size -= 16;
		}
		else
		{
			ft_print_hex(str + (16 * count), size);
			ft_putstr_non_printable(str + (16 * count), size);
			break ;
		}
		count++;
	}
	return (addr);
}

/*int	main(void)
{
	char	*str = "Bonjour les aminches\t\n\tc\a est 
	fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";

	ft_print_memory((void *)str, 92);
}*/
