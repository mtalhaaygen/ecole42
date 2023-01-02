#include <unistd.h>

int main(int gc, char **gv)
{
	int i;
	int j;

	i = 1;
	while (gv[i])
	{
		j = 0;
		while (gv[i][j])
		{
			if (gv[i][j] >= 'A' && gv[i][j] <= 'Z') // büyük harfse küçült
				gv[i][j] +=32;
			if ((gv[i][j] >= 'a' && gv[i][j] <= 'z') && ((gv[i][j + 1] <= 13 && gv[i][j + 1] >= 9) || gv[i][j + 1] == ' ' || gv[i][j + 1] == '\0')) 
			{//bir sonraki karakter white space ise ve harfse büyüt
				gv[i][j] -=32;
			}
			write(1, &gv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
