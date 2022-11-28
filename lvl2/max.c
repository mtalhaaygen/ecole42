#include <stdio.h>

int max(int *tab, unsigned int len)
{
	int enbyk;
	int i;

	i = 0;
	if (!tab || len == 0)
		return (0);
	enbyk = tab[i];
	while (i < len)// sayı dizisinin sonunda null yok ona göre bir koşul yazmalısın
	{
		if (enbyk < tab[i])
			enbyk = tab[i];
		i++;
	}
	return (enbyk);
}
int main()
{
	int a[3] = {-345, -44 , -31};
	printf("%d", max(a,3));
}
