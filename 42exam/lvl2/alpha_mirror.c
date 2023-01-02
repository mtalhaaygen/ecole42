#include <unistd.h>

int main(int gc, char **gv)
{
	if (gc == 2)
	{
		int i;

		i = 0;
		while (gv[1][i])
		{
			int b = 78;
			int k = 77;
			if ((gv[1][i] >= 'a' && gv[1][i] <= 'm') || (gv[1][i] >= 'A' && gv[1][i] <= 'M'))
			{
				if (gv[1][i] >= 'a')
					b = 110;
				gv[1][i] += ((b - gv[1][i]) * 2 - 1);
			}
			else if ((gv[1][i] >= 'n' && gv[1][i] <= 'z') || (gv[1][i] >= 'N' && gv[1][i] <= 'Z'))
			{
				if (gv[1][i] >= 'n')
					k = 109;
				gv[1][i] -= ((gv[1][i] - k) * 2 - 1);
			}
			write(1, &gv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
