#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t i;
    
    char *ptr= (char*) malloc(sizeof(*s1)*(ft_strlen(s1) + 1));
    if (!ptr)
		return (NULL);
    i  =0;
    while(!ptr[i])
    {
        ptr[i] =s1[i] ;
        i++;
    }
    ptr[i] = 0;
    return(ptr);
}
