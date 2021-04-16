int		ft_str_is_uppercase(char *str)
{
	int i;
	int n;

	n = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 64 && str[i] <= 90))
		{
			n = 0;
			break ;
		}
		i++;
	}
	return (n);
}
