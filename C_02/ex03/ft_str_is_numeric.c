int		ft_str_is_numeric(char *str)
{
	int i;
	int n;

	n = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			n = 0;
			break ;
		}
		i++;
	}
	return (n);
}
