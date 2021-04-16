void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int rev[size];

	i = 0;
	while (i < size)
	{
		rev[size - 1 - i] = tab[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = rev[i];
		i++;
	}
}
