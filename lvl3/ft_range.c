#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int start, int end)
{
	int *num;
	int i;
	int size;

	i = 0;
	size = start - end;
	if (size < 0)
		size *= -1;
	size++;
	num = malloc(sizeof(int) * size);
	while (i < size)
	{
		num[i] = start;
		start++;
		i++;
	}
	return (num);
}

void	ft_putnbr(int nb)
{
	char a;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *=-1;
		ft_putnbr(nb);
	}
	else if (nb < 10)
	{
		a = nb + 48;
		write(1, &a, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int main(int ac, char **av)
{
	int *s;
	int n;
	int min;
	int max;
	int i;

	min = atoi(av[1]);
	max = atoi(av[2]);
	n = max >= min ? max - min + 1 : min - max + 1;
	if (ac != 3)
		return 0;
	s = ft_range(min, max);
	i = 0;
	while (s[i] && n--)
	{
		ft_putnbr(s[i]);
		write(1, "\n", 1);
		i++;
	}
	return 1;
}
