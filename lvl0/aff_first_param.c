#include <unistd.h>

int main(int gc, char **gv)
{
	if (gc >= 2)
	{
		int i;

		i = 0;
		while (gv[1][i])
		{
			write(1, &gv[1][i], 1);
			i++;
		}
	}
	write(1, "\n",1);
}
