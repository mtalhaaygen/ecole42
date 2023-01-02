#include <unistd.h>

int ft_putnbr(int num)
{
	if (num > 9)
		ft_putnbr(num / 10);
	num = (num % 10) + 48;
	write(1, &num, 1);
	return num;
}
int main(int gc, char **gv)
{
	if (gv)
		ft_putnbr(gc - 1);
	write(1, "\n", 1);
	return (0);
}
