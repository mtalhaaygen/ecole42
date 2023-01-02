#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	asalmi(unsigned int n)
{
	int i;

	i = n / 2;
	while (i > 1)
	{
		if ((n % i) == 0)
			return 0;
		i--;
	}
	return 1;
}

void	putsum(int n)
{
	int kalan;
	if (n < 10)
	{
		kalan = n + 48;
		write(1, &kalan, 1);
	}
	else
	{
		kalan = (n / 10)  + 48;
		if (n < 10)
			write(1, &kalan, 1);
		else
			putsum(n / 10);
		putsum(n % 10);
	}
}

int	main(int gc, char **gv)
{
	if (gc == 2)
	{
		int num;
		int sum;

		sum = 0;
		num = atoi(gv[1]); // atoi kullanmadan yapmalısın :D
		while (num > 1)
		{
			if (asalmi(num))
				sum += num;
			num--;
		}
		putsum(sum);
	}
	else
		write(1, "0",1);
	write(1, "\n", 2);
	return (0);
}
