#include <unistd.h>

int main()
{
	char c = 'a';
	write(1, &c,1);
}
