#include <unistd.h>

int main(int gc, char **gv)
{
	if (gc > 1)
	{
		int i;
		int j;

		j = 1;
		while (gv[j])
		{
			i = 0;
			while (gv[j][i])
			{
				if (gv[j][i] >= 'A' && gv[j][i] <= 'Z') // büyük harf ise küçült
					gv[j][i] += 32;
				if (((gv[j][i - 1] >= 9 && gv[j][i - 1] <= 13) || gv[j][i - 1] == ' ') && (gv[j][i] <= 'z' && gv[j][i] >= 'a')) // bir önceki white space ise ve küçük harf ise büyüt
					gv[j][i] -= 32;
				write(1, &gv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}
