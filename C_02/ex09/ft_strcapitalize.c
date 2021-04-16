char	*ft_strlowcase(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 65 && str[j] <= 90)
			str[j] = str[j] + 32;
		j++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	ft_strlowcase(str);
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122)
		&& ((str[i - 1] >= 33 && str[i - 1] <= 47) || str[i - 1] == ' '))
			str[i] = str[i] - 32;
		if (str[0] == 0)
			return ("");
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	return (str);
}
