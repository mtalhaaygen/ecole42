#include "get_next_line.h"


int main()
{
	int fd;
	char *tmp;

	fd = open("talha.txt", O_RDWR);
	tmp = get_next_line(fd);
	printf("%s\n",tmp);
}