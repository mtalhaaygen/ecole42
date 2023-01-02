#include <unistd.h>

// check1(kontrol edilecek harf, str1in tamamı, harfin index numarası)
int check1(char c, char *str, int index)
{
	// check1 harfin str1 de başka olup olmadığına baksın varsa 0 yoksa 1 return etsin
	int i;

	i = 0;
	while(str[i] && i < index)
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

// check2(kontrol edilcek harf, str2 nin tamamı)
int check2(char c, char *str)
{
	// check2 harfin str2 de olup olmadığına baksın varsa 1 yoksa 0 dönsün.
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int main(int gc, char **gv)
{
	if (gc == 3)
	{
		int i;

		i = 0;
		while (gv[1][i])
		{
		// str1 in ilk harfini check1 ve check2 fonksiyonuna at
			if (check1(gv[1][i] , gv[1], i) && (check2(gv[1][i], gv[2])))
					write(1, &gv[1][i], 1);
			i++;
		//  iki fonksiyondanda 1 değeri gelirse write ile ekrana bassın.
		}
	}
	write(1, "\n",1);
	return (0);
}
