unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int check_src_size;

	check_src_size = 0;
	while (src[check_src_size] != '\0')
	{
		check_src_size++;
	}
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (check_src_size);
}
