int		ft_str_is_lowercase(char *str)
{
	int i;
	int n;

	n = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			n = 0;
			break ;
		}
		i++;
	}
	return (n);
}
