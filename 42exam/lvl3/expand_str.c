#include <unistd.h>


int main(int gc, char **gv)
{
	if (gc == 2)
	{
		int i;

		i = 0;
		while ((gv[1][i] <= 13 && gv[1][i] >= 9) || gv[1][i] == ' ')
			i++;
		while (gv[1][i]) // white space görene kadar yazarak ilerle görünce ilerlet 3 tane space yaz tüm ws leri atla
		{
			if ((gv[1][i] <= 13 && gv[1][i] >= 9) || gv[1][i] == ' ')
			{
				while ((gv[1][i] <= 13 && gv[1][i] >= 9) || gv[1][i] == ' ')
					i++;
				if (gv[1][i] == '\0')
					break ;
				write(1, "   ", 3);
			}
			if (!((gv[1][i] <= 13 && gv[1][i] >= 9) || gv[1][i] == ' ')) // white space değilse write ile yaz
				write(1, &gv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
