#include "libft.h"
int ft_isdigit(int a)
{
    if((a <= 57 && a >= 48))
    {
        return 1;
    }
    return 0;
}

/*int main(void) {
    char c1 = '3', c2 = '7', c3 = 'M';

    printf("%c bir rakam%s\n", c1, ft_isdigit(c1) ? "dır!" : " değildir!");
    printf("%c bir rakam%s\n", c2, ft_isdigit(c2) ? "dır!" : " değildir!");
    printf("%c bir rakam%s", c3, ft_isdigit(c3) ? "dır!" : " değildir!");

    return 0;
}

beklenen çıktı
3 bir rakamdır!
7 bir rakamdır!
M bir rakam değildir!
*/
