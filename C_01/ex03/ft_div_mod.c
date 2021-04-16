void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int div_a_b;
	int mod_a_b;

	div_a_b = a / b;
	mod_a_b = a % b;
	*div = div_a_b;
	*mod = mod_a_b;
}
