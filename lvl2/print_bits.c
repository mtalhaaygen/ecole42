#include <unistd.h>

int mypow(int taban, int us)
{
	int sonuc;

	sonuc = 1;
	if (us == 1)
		return taban;
	while (us > 1)
	{
		sonuc *= taban;
		us--;
	}
	return sonuc;
}

void	print_bits(unsigned char octet)
{
	int i;

	i = 8;
	// parametre olarak en fazla 8 bitlik bir değer alabilir
	while (i >= 1)
	{
		if (octet / mypow(2,i) > 0)
		{
			//write(1, "help me :D", 10);
			write(1, "1", 1);
			octet -= mypow(2,i);
		}
		else
			write(1, "0",1);
		i--;
	}
}

int main()
{
	print_bits(2);
	write(1, "\n",1);
	print_bits(255);
	write(1, "\n",1);
	print_bits(128);
	write(1, "\n",1);
	print_bits(50);
	write(1, "\n",1);
	print_bits(76);
}
