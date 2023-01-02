#include <unistd.h>

// check1 harfin gönderilen strde önceki kısımında olup olmadığına baksın eğer varsa 0 yoksa 1 dönsün
int check1(char c, char *str, int index)
{
	int i;

	if (index == 0)
		return (1);
	i = 0;
	while (str[i] && i < index)
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

// checkstr1(harf, str1) harfin str1de olup olmadığına bakıyor
int checkstr1(char c, char *str1)
{
	int i;

	i = 0;
	while (str1[i])
	{
		if (c == str1[i])
			return (0);
		i++;
	}
	return (1);
}

int main(int gc, char **gv)
{
	if(gc == 3)
	{
		int i;

		i = 0;
		// str1 in harflerini sırayla check1 e gönder
		while(gv[1][i])
		{
		// check1(harf, str1, index) index i gönderiyoruz çünkü 0 dan indexe kadar kontrol edecek
			if (check1(gv[1][i], gv[1], i))
				write(1, &gv[1][i], 1);
			i++;
		}
		i = 0;
		while(gv[2][i])
		{
		// str2 nin harflerini checkstr1e ve check1e aşağıdaki şekilde gönder ikiside 1 return ederse ekrana yaz
		// check1(harf, str2, index) harfin str2de indexe kadar olan kısımda var olup olmadıgına bakıyor
			if (checkstr1(gv[2][i], gv[1]) && check1(gv[2][i], gv[2], i))
				write(1, &gv[2][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
