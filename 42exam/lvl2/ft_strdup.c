#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *new;
	int i;

	i = 0;
	while (src[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (0);
	while(i >= 0)
	{
		new[i] = src[i];
		i--;
	}
	return (new);
}
