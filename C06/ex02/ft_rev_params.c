#include <unistd.h>
#include <stddef.h>

static void	ft_putstr(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (1);
	}
	while (--argc > 0)
	{
		ft_putstr(argv[argc]);
	}
	return (0);
}
