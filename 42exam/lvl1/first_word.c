#include <unistd.h>

int main(int gc, char **gv)
{
	if (gc == 2)
	{
		int i;

		i = 0;
		while(gv[1][i] == ' ' || gv[1][i] == '\t')
			i++;
		while(gv[1][i])
		{
			if (gv[1][i] == ' ' || gv[1][i] == '\t')
				return (0);
			write(1, &gv[1][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
