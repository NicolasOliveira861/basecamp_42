#include <unistd.h>

void	print_whiles(int t1, int u1);
void	print_if(int t1, int u1, int t2, int u2);

void	ft_print_comb2(void)
{
	int t1;
	int u1;

	t1 = '0';
	while (t1 <= '9')
	{
		u1 = '0';
		while (u1 <= '8')
		{
			print_whiles(t1, u1);
			u1++;
		}
		t1++;
	}
}

void	print_whiles(int t1, int u1)
{
	int t2;
	int u2;

	t2 = t1;
	while (t2 <= '9')
	{
		u2 = u1 + 1;
		while (u2 <= '9')
		{
			write(1, &t1, 1);
			write(1, &u1, 1);
			write(1, " ", 1);
			write(1, &t2, 1);
			write(1, &u2, 1);
			print_if(t1, u1, t2, u2);
			u2++;
		}
		t2++;
	}
}

void	print_if(int t1, int u1, int t2, int u2)
{
	if (t1 == '9' && u1 == '8' && t2 == '9' && u2 == '9')
	{
		write(1, "", 1);
	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
