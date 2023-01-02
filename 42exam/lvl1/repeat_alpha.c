#include <unistd.h>

int main(int gc, char **gv)
{
	if (gc == 2)
	{
		int i;
		int count;
	
		i = 0;
		while(gv[1][i])
		{
			if(gv[1][i] <= 'Z' && gv[1][i] >= 'A')
			{
				count = gv[1][i] - 'A';
				while(count > 0)
				{
					write(1, &gv[1][i], 1);
					count--;
				}
			}
			if(gv[1][i] <= 'z' && gv[1][i] >= 'a')
			{
				count = gv[1][i] - 'a';
				while(count > 0)
				{
					write(1, &gv[1][i], 1);
					count--;
				}
			}
			write(1, &gv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
