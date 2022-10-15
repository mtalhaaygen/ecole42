#include "libft.h"
int ft_isprint(int a)
{
    if((a >= 32 && a <= 126))
    {
        return 1;
    }
    return 0;
}

/*int main(void) {
    char c1 = 'H', c2 = 'e', c3 = '\t';

    printf("H yazdırılabilir bir karakter%s\n", ft_isprint(c1) ? "dir!" : " değildir!");
    printf("e yazdırılabilir bir karakter%s\n", ft_isprint(c2) ? "dir!" : " değildir!");
    printf("\\t yazdırılabilir bir karakter%s", ft_isprint(c3) ? "dir!" : " değildir!");

    return 0;
}*/
/*
H yazdırılabilir bir karakterdir!
e yazdırılabilir bir karakterdir!
\t yazdırılabilir bir karakter değildir!
 * */
