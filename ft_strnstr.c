#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
 {
    size_t i;
    if(!haystack || !needle)
        return (NULL);
    if(!needle)
        return ((char *)haystack);
    
    i = 0 ;
    while(i < len && haystack[i])
    {
        size_t j;
        
        j = 0;
        while((j +i)<len && haystack[j+i] && needle[j] && (haystack[i+j] == needle[j]))
        {
            j++;
        }
        if (!needle[j])
			return ((char*)(haystack + i));
        i++;
    }
    
 }
