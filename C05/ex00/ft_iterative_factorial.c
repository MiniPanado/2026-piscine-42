int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	res = 1;
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
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
		printf("%d\n", ft_iterative_factorial(atoi(argv[i])));
	}
}*/
