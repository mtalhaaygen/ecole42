#include <stdio.h>
#include <unistd.h>

int main(int gc, char **gv)
{
	int j;

	j = 0;
	if (gc != 2)
		write(1, "a",1);
	else
	{
		while (gv[1][j])
		{
			if (gv[1][j] == 'a')
			{
				write(1, &gv[1][j], 1);
				return 0;
			}
			j++;
		}
	}
	printf("\n");
}
