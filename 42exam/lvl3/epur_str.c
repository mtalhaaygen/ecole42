#include <unistd.h>

int main(int gc, char **gv)
{
	if (gc == 2)
	{
		int i;
		int status;

		i = 0;
		while(gv[1][i] == '\t' || gv[1][i] == ' ')
			i++;
		status = 1;
		while(gv[1][i] != '\0')
		{
			if(gv[1][i] == '\t' || gv[1][i] == ' ')
			{
				if (status == 1)
				{
					write(1, " ", 1);
					status = -1;
				}
				i++;
			}
			else
			{
				write(1, &gv[1][i], 1);
				status = 1;
				i++;
			}
		}

	}
	write(1, "\n", 1);
	return (0);
}
// boşlukları atla boşluk görmedikçe yaz
