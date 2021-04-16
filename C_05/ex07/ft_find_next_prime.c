int		ft_is_prime(int n)
{
	int i;

	if (n == 0 || n == 1 || n < 0)
		return (0);
	i = 2;
	while (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int check;

	check = ft_is_prime(nb);
	if (check == 1)
		return (nb);
	if (check == 0)
	{
		while (ft_is_prime(nb) == 0)
		{
			nb++;
		}
	}
	return (nb);
}
