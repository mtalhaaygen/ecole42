#include <stdio.h>

int	digitcount(const char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

int	mypow(int taban, int us)
{
	if (us == 0)
		return (1);
	if (us == 1)
		return taban;
	while(us >= 1)
	{
		taban *= taban;
		us--;
	}
	return (taban);
}
int ft_atoi_base(const char *str, int str_base)
{
	int i;
	int j;
	int neg;
	int num;
	int digit;
	char *lbase = "0123456789abcdef";

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	//strnin kaç basamaklı olduğunu bul örnegin str = 7CF olsun bu durumda basamak sayısı 3
	digit = digitcount(str + i);
	digit--;
	while(str[i] && digit >= 0)
	{
		j = 0;
		while(lbase[j])
		{
			if (lbase[j] == str[i])
			{
				num += (mypow(str_base, digit) * j);
				digit--;
				break;//amaç ikinci while dan çıkmak
			}
			j++;
		}
		i++;
	}
	return (neg * num);
	// str mizin ilk karakteri 7 kaçıncı indexde oluyor bul örneğin 7
	// 3 karakterli oldugundan bir eksiği 2 den başlayıp (16^2 * 7) + 
	// taban 16 oldugu durum için
	// strmizin ikinci karakteri C kaçıncı indexte (16^1 * 12) +
	// strmizin üçüncü karakteri F kaçıncı indexte (16^0 * 15)
	// sonuc 1999 olacak num = 1999;
}

int main()
{
	int num = ft_atoi_base("	 -11110000110010",2);
	printf("%d", num);
}
