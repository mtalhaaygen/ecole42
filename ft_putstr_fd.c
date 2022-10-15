#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*int main()
{
	int i = 0;
	FILE *f1;
	f1 = fopen("/Users/maygen/desktop/talha.txt","w");
	ft_putstr_fd("talha",3);
	fclose(f1);

}*/
