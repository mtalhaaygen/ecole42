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
	int sum = 1;
	if (us == 0)
		return (1);
	if (us == 1)
		return taban;
	while(us >= 1)
	{
		sum *= taban;
		us--;
	}
	return (sum);
}

int ft_atoi_base(const char *str, int str_base)
{
	int i;
	int j;
	int neg;
	int num;
	int digit;
	char *lbase = "0123456789abcdef";
	char *ubase = "0123456789ABCDEF";

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
	}//strnin kaç basamaklı olduğunu bul örnegin str = 7CF olsun bu durumda basamak sayısı 3
	digit = digitcount(str + i);
	digit--;
	while(str[i] && digit >= 0)
	{
		j = 0;
		while(lbase[j])
		{
			if (lbase[j] == str[i] || ubase[j] == str[i])
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
}
	// str mizin ilk karakteri 7 kaçıncı indexde oluyor bul örneğin 7
	// taban 16 oldugu durum için
	// 3 karakterli oldugundan bir eksiği 2 den başlayıp (16^2 * 7) + 
	// strmizin ikinci karakteri C kaçıncı indexte 12 (16^1 * 12) +
	// strmizin üçüncü karakteri F kaçıncı indexte 15 (16^0 * 15)
	// sonuc 1999 olacak num = 1999;

int main()
{
	int num = ft_atoi_base("	 +25772666",8);
	printf("%d", num);
}
