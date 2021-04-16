#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	char	*str;
	char	c;

	argc = 0;
	str = argv[0];
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}
