#include <unistd.h>

void	checknb(int c, char digits[10], int nb);

void	ft_putnbr(int nb)
{
	int		c;
	char	digits[10];

	c = 0;
	checknb(c, digits, nb);
	c = 9;
	while (c >= 0)
	{
		if (digits[c] != 'x')
		{
			write(1, &digits[c], 1);
		}
		c--;
	}
}

void	checknb(int c, char digits[10], int nb)
{
	while (c <= 9)
	{
		if ((nb / 10) != 0 || (nb % 10) != 0 || c == 0)
		{
			if (nb < 0)
			{
				if (c == 0)
				{
					write(1, "-", 1);
				}
				digits[c] = (nb % 10) * -1 + '0';
			}
			else
			{
				digits[c] = nb % 10 + '0';
			}
		}
		else
		{
			digits[c] = 'x';
		}
		c++;
		nb /= 10;
	}
}
