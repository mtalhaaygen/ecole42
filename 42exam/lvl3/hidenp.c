#include <unistd.h>

int main(int gc, char **gv)
{
	if (gc == 3)
	{
		int i;
		int j;

		i = 0;
		j = 0;
		while (gv[2][i] && gv[1][j])
		{
			if (gv[2][i] == gv[1][j])
				j++;
			i++;
		}
		if (gv[1][j])
			write(1, "0", 1);
		else
			write(1, "1", 1);
	}
	write(1, "\n",1);
	return (0);
}
