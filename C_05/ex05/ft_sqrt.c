int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i < 46350)
	{
		if (nb - (i * i) == 0)
			return (i);
		i++;
	}
	return (0);
}
