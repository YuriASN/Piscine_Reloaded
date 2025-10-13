int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 1)
		return (0);
	res = nb;
	if (nb > 1)
		res *= ft_recursive_factorial(nb - 1);
	return (res);
}
