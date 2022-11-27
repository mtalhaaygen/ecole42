#include <unistd.h>

int main(int gc, char **gv)
{
	if (gc >= 2)
	{
		int i;
		int j;

		i = gc -1;
		j = 0;
		while (gv[i][j])
		{
			write(1, &gv[i][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
