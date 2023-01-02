#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet << 4 ^ octet >> 4); // or yada xor kullanılabilir
}

int main()
{
	char x;
	x = swap_bits(50); // binary karşılığı 0011 0010
	printf("%c", x); // 0010 0011 yani  decimal 35 # karakteri
}
