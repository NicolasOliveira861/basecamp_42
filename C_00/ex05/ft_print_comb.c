#include <unistd.h>

void	ft_print_unit_while(int h, int t, int u, char c);

void	ft_print_comb(void)
{
	int		u;
	int		t;
	int		h;
	char	c;

	c = ',';
	h = '0';
	while (h <= '7')
	{
		t = h + 1;
		while (t <= '8')
		{
			u = t + 1;
			ft_print_unit_while(h, t, u, c);
			t++;
		}
		h++;
	}
}

void	ft_print_unit_while(int h, int t, int u, char c)
{
	while (u <= '9')
	{
		write(1, &h, 1);
		write(1, &t, 1);
		write(1, &u, 1);
		if (h < '7')
		{
			write(1, &c, 1);
			write(1, " ", 1);
		}
		u++;
	}
}
