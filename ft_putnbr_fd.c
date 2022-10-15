#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb == -2147483648)
		{
			write(fd, "-2147483648", 11);
		}
		else if (nb < 0)
		{
			ft_putchar_fd('-',fd);
			nb *= -1;
			ft_putnbr_fd(nb,fd);
		}
		else if (nb < 10)
		{
			ft_putchar_fd((nb + 48),fd);
		}
		else
		{
			/*235*/
			ft_putnbr_fd((nb / 10),fd);
			ft_putnbr_fd((nb % 10),fd);
		}
	}
}

/*int main()
{
	FILE *file;
	file = fopen("/Users/maygen/desktop/talha.txt", "w");
	ft_putnbr_fd(42,3);
	ft_putnbr_fd(-2147483648,3);
	ft_putnbr_fd(-23456,3);
	fclose(file);
}*/
