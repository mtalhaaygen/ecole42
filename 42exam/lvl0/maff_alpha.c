#include <unistd.h>

int main()
{
	char x = 'a';
	int i = 2;
	char c;

	while (x <= 'z')
	{
		if (i%2 == 1)
		{
			c = x -32;
			write(1, &c, 1);
		}
		else
		{
			write(1, &x, 1);
		}
		i++;
		x++;
	}
}
