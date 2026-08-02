int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("\n");
	}
	for (int i = 1; i < argc; i++)
	{
		printf("%d\n", ft_recursive_factorial(atoi(argv[i])));
	}
}*/
