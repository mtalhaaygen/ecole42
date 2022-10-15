#include "libft.h"
int ft_isalpha(int a)
{
    if((a <= 90 && a >= 65) || (a >= 97 && a <= 122))
    {
        return 1;
    }
    return 0;
}

/*int main(void) {
    char c1 = 'h', c2 = '4', c3 = '%';

    printf("%c alfabetik bir karakter%s\n", c1, ft_isalpha(c1) ? "dir!" : " değildir!");
    printf("%c alfabetik bir karakter%s\n", c2, ft_isalpha(c2) ? "dir!" : " değildir!");
    printf("%c alfabetik bir karakter%s", c3, ft_isalpha(c3) ? "dir!" : " değildir!");

    return 0;
}*/
/*
beklenen çıktı
h alfabetik bir karakterdir!
4 alfabetik bir karakter değildir!
% alfabetik bir karakter değildir!
*/
