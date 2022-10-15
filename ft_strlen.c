#include "libft.h"
size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}
/*int main(void)
{
	const char a[] = "talha";
	printf("%zu",ft_strlen(a));
}*/

