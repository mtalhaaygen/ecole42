#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int *num;
	int i;
	int size = 0;

	i = 0;
	if (end > start)
		size = end - start;
	if (start > end)
		size = start - end;
	size++;
	num = malloc(sizeof(int) * size);
	if (end > start)
	{
		while (i < size)
		{
			num[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			num[i] = start;
			start--;
			i++;
		}
	}
	return (num);
}

int main(int ac, char **av)
{
	int *s;
	int start;
	int end;
	int i;

	i = 0;
	start = atoi(av[1]);
	end = atoi(av[2]);
	s = ft_range(start, end);
	printf("%d\n", s[0]);
	while (i < 4)
	{
		printf("%d\n", s[i]);
		i++;
	}
	return 0;
}
