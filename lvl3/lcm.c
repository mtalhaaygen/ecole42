#include <stdio.h>

//LCM (Lowest Common Multiple) en küçük ortak kat
unsigned int	lcm_way1(unsigned int a, unsigned int b)
{
	// bu if - else if yapısı olmasaydıda program dogru sonucu verirdi
	if (a % b == 0)
		return a;
	else if (b % a == 0)
		return b;

	int i;

	i = 2;
	while ((i % a != 0) || (i % b != 0))
		i++;
	if (i % a == 0 && i % b == 0)
		return i;
}

unsigned int	lcm_way2(unsigned int a, unsigned int b) // ekok = | x * y| / ebob(x, y)  "en büyük ortak böleni bularak çözüme ulaşmak""
{
	int sonuc;
	int bolen;

	bolen = 0; 
	sonuc = a * b; // sonuc herturlu pozitif olacak o yüzden mutlak değerini almaya gerek yok
	// en buyuk ortak bolenı hesaplayalım,
	if (a < b)
	{
		if (b % a == 0)
			sonuc /= a;
		else
			bolen = a / 2;
	}
	if (a == b)
		sonuc /= b;
	if (a > b)
	{
		if (a % b == 0)
			sonuc /= b;
		else
			bolen = b / 2;
	}
	while (bolen >= 1)
	{
		if (b % bolen == 0 && a % bolen == 0)
		{
			sonuc /= bolen;
			break ;
		}
		bolen--;
	}
	return sonuc;
}

int main()
{
	printf("lcm_way1 LCM(21, 32) = %d\n", lcm_way1(34,12));
	printf("lcm_way2 LCM(21, 32) = %d\n", lcm_way2(12,34));
}
