#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_is_printable(*str))
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(unsigned char)*str / 16]);
			ft_putchar("0123456789abcdef"[(unsigned char)*str % 16]);
		}
		str++;
	}
}

/*int	main(void)
{
	ft_putstr_non_printable("Ola\nesta bem?");
}*/
