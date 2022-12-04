#include <unistd.h>

int	fatoi(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (str[i]) // 123
	{
		num = (num * 10) + str[i] - 48;
		i++;
	}
	return num;
}

void	ft_putnum(int sayi)
{
	char yazi;
	if (sayi >= 10)
		ft_putnum(sayi / 10);
	if (sayi < 10)
	{
		yazi = sayi + 48;
		write(1, &yazi, 1);
	}
	else
	{
		yazi = (sayi % 10) + 48;
		write(1, &yazi, 1);
	}
}

int main(int gc, char **gv)
{
	if (gc == 2)
	{
		char i;
		int sayi;
		int sonuc;

		sayi = fatoi(gv[1]);
		i = 49;
		while (i < 58)
		{
			write(1, &i,1);
			write(1, " x ", 3);
			ft_putnum(sayi);
			write(1, " = ", 3);
			sonuc = sayi * (i - 48);
			ft_putnum(sonuc);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
