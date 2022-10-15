#include "libft.h"
int counter(int n)
{
	int count;

	count = 0;
	if(n < 0)
	{
		n = (n * -1);
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}

	return count;
}
char *minret(int n)
{
	char *c;
	int i;

	i = 0;
	c = malloc(sizeof(char) * 11);
	c = "-2147483648";
	return c;
}
char	*ft_itoa(int n)
{
	char	*c;
	int		count;
	int		kap;

	if(n == -2147483648)
	   return minret(n);
	kap = n;
	count = counter(n);
	c = malloc(sizeof(char) * (count + 1));
	if (!c)
		return (NULL);
	if (n < 0)
		kap = kap * -1;
	c[count] = 0;
	while (count != 0)
	{
		c[--count] = (kap % 10) + 48;
		kap = (int)(kap / 10);
		if(count == 0)
			c[0] = '-';
	}
	return (c);
}
/*int main()
{
	printf("çıktı : %s",ft_itoa(-647));
}*/
