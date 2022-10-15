#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    int i;
    size_t j;

    ptr = (char *)malloc(sizeof(*s)*(len + 1));
    if (!ptr)
		return (NULL);

    i= 0;
    j = 0;
    while(s[i])
    {
        if(i >= start  && j <= len)
        {
            ptr[j]= s[i];
            j++;
        }
         i++;
    }
    ptr[j] = 0;
    return (ptr);
}
