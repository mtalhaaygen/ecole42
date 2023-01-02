#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int num;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] <= 9 && str[i] >= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		neg *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + str[i] - 48;
		i++;
	}
	return (neg * num);
}

int main()
{
	const char a[] = "   +-21345678";
	const char b[] = "   -213z45678";
	const char c[] = "   +21345678";
	const char d[] = " -21345678";
	printf("%d",ft_atoi(a));
	printf("\n");
	printf("%d",ft_atoi(b));
	printf("\n");
	printf("%d",ft_atoi(c));
	printf("\n");
	printf("%d",ft_atoi(d));
	printf("\n----------\n");
	printf("%d\n",ft_atoi(a));
	printf("%d\n",ft_atoi(b));
	printf("%d\n",ft_atoi(c));
	printf("%d",ft_atoi(d));
}
