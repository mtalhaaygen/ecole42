#include "libft.h"

int      ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while(i <  n)
	{
		if(((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return 1;
		}
		i++;
	}
	return 0;
}

/*int main( void )p
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgileri";
    int ret;

    ret = memcmp(cp1, cp2, 10);

    if(ret<0) printf("cp1 bellek içeriği cp2 bellek içeriğinden küçüktür!");
    else if(ret>0) printf("cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!");
   else printf("cp1 bellek içeriği cp2 bellek içeriğine eşittir!");

    return 0;
}*/
