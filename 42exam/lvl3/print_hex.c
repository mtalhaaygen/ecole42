#include <unistd.h>
#include <stdio.h>

int	fatoi(char *str)
{
	int i;
	int sonuc;

	i = 0;
	sonuc = 0;
	while (str[i])
	{
		sonuc = (sonuc * 10) + str[i] - 48;
		i++;
	}
	return sonuc;
}

void	print_hex(int sayi)
{
	char base[] = "0123456789abcdef";
	if (sayi > 16)
	{
		print_hex(sayi / 16);
	}
	sayi = sayi % 16;
	write(1, &base[sayi],1);
}

int main(int gc, char **gv)
{

	if (gc == 2)
	{
		int sayi;

		sayi = fatoi(gv[1]);
		print_hex(sayi);
		/*while (sayi > 0)
		&{
			sonuc[i] = base[sayi % 16];
			sayi = sayi / 16;
		}*/
	}
	write(1, "\n",1);
	return (0);
}
