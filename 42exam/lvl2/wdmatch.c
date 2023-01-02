#include <unistd.h>

int check(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str2[i])
	{
		if(str1[j] == str2[i])
			j++;
		i++;
	}
	i = 0;
	while (str1[i])
		i++;
	if (j == i)
		return (1);
	return (0);
}
int main(int gc, char **gv)
{
	if (gc == 3)
	{
		if (check(gv[1], gv[2]))
		{
			int i;

			i = 0;
			while(gv[1][i])
			{
				write(1, &gv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
