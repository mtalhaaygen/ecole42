#include <unistd.h>

int main(int gc, char **gv)
{
	if (gc == 2)
	{
		int i;

		i = 0;
		while ((gv[1][i] >= 9 && gv[1][i] <= 13) || gv[1][i] == ' ' || gv[1][i] == '\0')
		{
			if (gv[1][i] == '\0')
			{
				write(1, "\n",1);
				return (0);
			}
			i++;
		}
		i = 0;
		while(gv[1][i])
			i++;
		i--;
		while (i > 0 && !((gv[1][i] >= 9 && gv[1][i] <= 13) || gv[1][i] == ' '))
			i--;
		i++;
		while (gv[1][i])
		{
			write(1, &gv[1][i],1);
			i++;
		}
	}
	write(1, "\n",1);
	return (0);
}
