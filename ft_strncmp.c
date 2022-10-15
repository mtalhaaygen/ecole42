#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while(s1[i] && s2[i] && n != 0)
	{
		if(s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		i++;
		n--;
	}
	return NULL;
}
