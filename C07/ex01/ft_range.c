#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	size_t	i;

	if (min >= max)
	{
		return (NULL);
	}
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		range[i++] = min++;
	}
	return (range);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("You need to pass 2 arguments (Min and Max)!\n");
		return (1);
	}
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	int *tab = ft_range(min, max);
	if (!tab)
	{
		printf("Min can't be greater than max\n");
		return (1);
	}
	int size = abs(max - min);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
}*/
