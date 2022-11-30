// bu fonksiyon tamamlanmadı
#include <stdio.h>
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char new;
	int i;

	i = 7;
	new = 0;
	while (i <= 7)
	{
		if (((octet >> i) & (1 << (i -7))) ==  (1 << (i - 7)))
			new += (1 << i);
		i--;
	}
	return (new);
}

int main()
{
	unsigned char a= 50; // '2' karakteri 0011 0010
	a = reverse_bits(a); // 0100 1100
	printf("**%d - %c**", a, a); // 76 sayısını ve 'L' karakterini ekrana basmasını bekliyorum 
}
