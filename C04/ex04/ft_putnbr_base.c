#include <unistd.h>
#include <stdbool.h>

#define ASCII_SIZE 256

static bool	ft_base_is_valid(char *base)
{
	int		i;
	int		index;
	short	freq[ASCII_SIZE];

	if (*base == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (i < ASCII_SIZE)
		freq[i++] = 0;
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (false);
		if (++freq[(unsigned char)base[i]] > 1)
			return (false);
		i++;
	}
	return (true);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!ft_base_is_valid(base))
	{
		return ;
	}
}
