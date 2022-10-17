#include "libft.h"
#include <stdio.h>
int counter(int n)
{
	int count;

	count = 0;
	if(n < 0)
	{
		n = (n * -1);
		count++;
	}
	if( n == -0)
	{
		n = 0;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}

	return count;
}
char	*ft_itoa(int n)
{
	char	*c;
	int		count;
	int		kap;

	if(n == -2147483648)
	{
	   return ft_strdup("-2147483648");
	}
	else
	{
		kap = n;
		count = counter(n);
		c = malloc(sizeof(char) * (count + 1));
		if (!c)
			return (NULL);
		if (n < 0)
			kap = kap * -1;
		if (n == -0)
			kap = 0;
		c[count] = 0;
		while (count != 0)
		{
			c[--count] = (kap % 10) + 48;
			kap = (int)(kap / 10);
			if (n < 0)
				c[0] = '-';
		}
		return (c);
	}
	
}