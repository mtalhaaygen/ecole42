#include <stdio.h>
#include <stdlib.h>

int main(int gc, char **gv)
{
	if (gc == 3)
	{
		// büyük olan küçük olana tam bölünüyorsa return (küçük sayi)
		// yoksa
		// küçük sayının yarısından başlayıp 1 e kadar tüm sayılara sırayla bölünüyormu bak
		int say1;
		int say2;
		int x;

		say1 = atoi(gv[1]);
		say2 = atoi(gv[2]);
		if (say1 > say2)
		{
			if (say1 % say2 == 0)
			{
				printf("%d", say2);
				return 0;
			}
			x = say2 / 2;
		}
		else
		{
			if (say2 % say1 == 0)
			{	
				printf("%d", say1);
				return 0;
			}
			x = say1 / 2;
		}
		while (x >= 1)
		{
			if ((say2 % x == 0) && (say1 % x == 0))
			{	
				printf("%d", x);
				return 0;
			}
			x--;
		}
	}
	printf("\n");
	return (0);
}
