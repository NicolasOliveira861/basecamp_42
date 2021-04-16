char	*cmp_while(char *str, char *to_find, int i, int j)
{
	char *value;

	while (to_find[j] != '\0')
	{
		if (str[i] != to_find[j])
		{
			value = 0;
			break ;
		}
		else
			value = &str[i - j];
		++i;
		++j;
	}
	return (value);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*value;

	value = str;
	i = 0;
	while (str[i] != '\0' && *to_find != 0)
	{
		j = 0;
		if (str[i] == to_find[j])
			value = cmp_while(str, to_find, i, j);
		else
			while (str[i] != ' ')
				++i;
		if (value != str)
			break ;
		++i;
	}
	return (value);
}
