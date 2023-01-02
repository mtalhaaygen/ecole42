#include <stdio.h>
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char new;
	int i;

	i = 0;
	new = 0;
	while (i <= 7)
	{
		if (((octet >> (7 - i)) & 1) == 1)
			new |= (1 << i);
		i++;
	}
	return (new);
}

int main()
{
	unsigned char a= 50; // '2' karakteri 0011 0010
	a = reverse_bits(a); // 0100 1100
	printf("**%d - %c**", a, a); // 76 sayısını ve 'L' karakterini ekrana basmasını bekliyorum 
}
