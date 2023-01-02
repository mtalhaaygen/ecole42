#include <unistd.h>

int main(int gc, char **gv)
{
	if (gc == 2)
	{
		int i;

		i = 0;
		while(gv[1][i])
		{
			if (gv[1][i] == 'Z')
				write(1, "A",1);
			else if (gv[1][i] == 'z')
				write(1, "a",1);
			else if ((gv[1][i] >= 'a' && gv[1][i] < 'z') || (gv[1][i] >='A' && gv[1][i] < 'Z'))
			{
				gv[1][i] += 1;
				write(1, &gv[1][i], 1);	
			}
			else
				write(1, &gv[1][i], 1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
