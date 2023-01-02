#include <unistd.h>

int main(int gc, char **gv)
{
	if (gc == 4 && gv[2][1] == '\0' && gv[3][1] == '\0')
	{
		int i;

		i = 0;
		while(gv[1][i])
		{
			if (gv[1][i] == gv[2][0])
				gv[1][i] = gv[3][0];
			write(1, &gv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
