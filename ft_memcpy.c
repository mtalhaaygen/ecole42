#include "libft.h"

void * ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (!dst && !src)
		return (0);
	while(i < n)
	{
		*(char*)(dst + i) = *(char*)(src + i);
		i++;
	}
	return dst;
}

/*int main( void )
{
    char *cp = "Bilgisayar&Programlama";
    char dest[40];

    ft_memcpy(dest, cp, 40);
    printf("%s", dest);

    return 0;
}*/
/*
Bilgisayar&Programlama
Bilgisayar&
*/
