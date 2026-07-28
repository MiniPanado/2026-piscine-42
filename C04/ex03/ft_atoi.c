#include <stdbool.h>

// 9  == '\t'
// 13 == '\r'

static bool	ft_is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	short			signal;
	unsigned int	res;

	i = 0;
	while (ft_is_space(str[i]))
	{
		i++;
	}
	signal = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signal = -signal;
		}
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * signal);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	argv++;
	printf("%d\n", ft_atoi(*argv));
	return (0);
}*/
