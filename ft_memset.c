#include "libft.h"
void * ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while(i < len)
	{
		*(unsigned char*)(b + i) = (unsigned char)c;
		i++;
	}
	return b;
}


/*int main( void )
{
    char cdizi[] = "Bilgisayar";

    printf("cdizi bellek içeriği: %s\n", cdizi);

    ft_memset(cdizi, 'x', 5);

    printf("cdizi bellek içeriği: %s", cdizi);

    return 0;
}*/
/*BEKLENEN ÇIKTI
 cdizi bellek içeriği: Bilgisayar
cdizi bellek içeriği: xxxxxsayar

Parametreler

b: C parametresindeki karakterin kopyalanacağı belleği gösteren işaretçidir.

c: Dest parametresine kopyalanacak karakterdir.

n: Kopyalanacak maksimum karakter sayısıdır.


 * */
