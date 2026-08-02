#define QUAD_RESIDUES_MOD16 531

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0 || !((QUAD_RESIDUES_MOD16 >> (nb & 0xF)) & 1))
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (nb);
	}
	i = 2;
	while (i < nb / i)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
