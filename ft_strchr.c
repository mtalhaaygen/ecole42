#include "libft.h"
char                    *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while(s[i] && c != '\0')
	{
		if (s[i] == (unsigned char) c)
			return (s + i);
		i++;
	}
	return NULL;
}
