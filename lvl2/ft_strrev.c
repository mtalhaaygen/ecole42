#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str);

int main()
{
	char s[] = "talha";
	printf("%s\n", s);
	printf("%s\n", ft_strrev(s));
}

char	*ft_strrev(char *str)
{
	char *newstr;
	int i;
	int j;

	i = 0;
	while(str[i])
		i++;
	newstr = malloc(i + 1);
	if (!newstr)
		return (0);
	j = 0;
	i--;
	while (str[j])
	{
		newstr[j] = str[i];
		i--;
		j++;

	}
	newstr[j] = '\0';
	return (newstr);
}
