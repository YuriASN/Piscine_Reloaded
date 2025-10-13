/* Substracting from nb consecutive odd numbers until you get 0.
how many substractions you did, is the square root of the number. */
int	ft_sqrt(int nb)
{
	int	odd;
	int	count;

	count = 0;
	odd = 1;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		nb -= odd;
		odd += 2;
		count++;
	}
	if (!nb)
		return (count);
	return (0);
}
