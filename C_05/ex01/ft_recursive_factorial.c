int		ft_recursive_factorial(int nb)
{
	int res;

	res = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (res * ft_recursive_factorial((nb - 1)));
}
