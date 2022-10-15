#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
int main( void )
{
    const char *cp = "Bilgisayar";
    const char cd = 'g';

    printf("%c karakterinin bellek adresi: %p\n", cd, memchr(cp, cd, strlen(cp)));

    return 0;
}
*/
/*
g karakterinin bellek adresi: 00403027
 * */
