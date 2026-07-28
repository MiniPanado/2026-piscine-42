#include <unistd.h>

// -(unsigned int)nb is equal to (2^32 - nb) % 2^32

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb < 0)
	{
		write(1, "-", 1);
		number = (-(unsigned int)nb);
	}
	else
	{
		number = (unsigned int)nb;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	write(1, &"0123456789"[number % 10], 1);
}
