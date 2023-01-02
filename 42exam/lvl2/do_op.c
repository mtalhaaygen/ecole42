#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int gc, char **gv)
{
	if (gc == 4)
	{
		int num1;
		int num2;
		int s;

		num1 = atoi(gv[1]);
		num2 = atoi(gv[3]);
		//printf("%d - %d\n",num1,num2);
		if (gv[2][0] == '+')
			s = num1 + num2;
		else if (gv[2][0] == '-')
			s = num1 - num2;
		else if (gv[2][0] == '*')
			s = num1 * num2;
		else if (gv[2][0] == '/')
			s = num1 / num2;
		else if (gv[2][0] == '%')
			s = num1 % num2;
		printf("%d",s);
	}
	printf("\n");
	return (0);
}
