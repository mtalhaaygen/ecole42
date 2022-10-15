#include "libft.h"
char *ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen(str);
	i--;
	while(i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)str + i);
		i--;
	}
	/*if((unsigned char)c == '\0')
		return ((char *)str);*/
	return NULL;
}
