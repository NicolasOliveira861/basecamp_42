int		ft_check_spaces(char j)
{
	if (j == '\n' || j == '\v' || j == '\t'
	|| j == '\f' || j == '\r' || j == ' ')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int value;
	int signal;

	signal = 1;
	value = 0;
	i = 0;
	while (ft_check_spaces(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (value * signal);
}
