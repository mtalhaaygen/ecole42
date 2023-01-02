#include <unistd.h>

int main()
{
	char x = 'z';
	int i = 2;
	char c;

	while (x >= 'a')
	{
		if (i%2 == 0)
			write(1, &x, 1);
		else
		{
			c = x - 32;
			write(1, &c, 1);
		}
		i++;
		x--;
	}	
}
