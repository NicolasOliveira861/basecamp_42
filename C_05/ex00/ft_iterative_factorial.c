int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	res = nb;
	while (nb > 1)
	{
		res = res * (nb - 1);
		nb--;
	}
	return (res);
}
