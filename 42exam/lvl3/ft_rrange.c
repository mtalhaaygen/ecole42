#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int size;
	int *num;
	int i;

	i = 0;
	if (end > start)
	{
		size = end - start + 1;
		num = malloc(sizeof(int) * size);
		if (!num)
			return (0);
		while (i < size)
		{
			num[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		size = start - end + 1;
		num = malloc(sizeof(int) * size);
		if (!num)
			return (0);
		while (i < size)
		{
			num[i] = end;
			end++;
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
        s = ft_rrange(start, end);
        //printf("%d\n", s[0]);
        while (i < 4)
        {
                printf("%d\n", s[i]);
                i++;
        }
        return 0;
}                                                                    
