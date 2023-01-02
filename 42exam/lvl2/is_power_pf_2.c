#include <stdio.h>
int	is_power_of_2(unsigned int n);

int main()
{
	printf("0 : %d\n", is_power_of_2(0));
	printf("1 : %d\n", is_power_of_2(1));
	printf("2 : %d\n", is_power_of_2(2));
	printf("3 : %d\n", is_power_of_2(3));
	printf("7 : %d\n", is_power_of_2(7));
	printf("16 : %d\n", is_power_of_2(16));
	printf("1000 : %d\n", is_power_of_2(1000));
	printf("2147483647 : %d\n", is_power_of_2(2147483647));
	printf("1073741824 : %d\n", is_power_of_2(1073741824));
	printf("2147483648 : %d\n", is_power_of_2(2147483648));
	printf("4294967295 : %d\n", is_power_of_2(4294967295));
	printf("4294967297 : %d\n", is_power_of_2(4294967297));// bu değer 1 e eşdeğer
}

int	is_power_of_2(unsigned int n)
{
	int kalan;
	// 2^0 = 1
	if (n == 1)
		return (1);
	while (n > 2)
	{
		kalan = n % 2;
		if (kalan == 0)
			n = n / 2;
		else
			return (0);
	}
	if (n == 2)
		return (1);
	return (0);

}


