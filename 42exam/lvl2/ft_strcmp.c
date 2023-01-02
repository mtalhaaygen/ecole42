#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] || s2[i]) // bu koşulun veya olması önemli 
	{
		if (s1[i] != s2[i])
			return s1[i] - s2[i];
		i++;
	}
	return 0;
}

int main()
{
	const char *cp1 = "Bilgis";
	const char *cp2 = "Bilgis";
	int ret;
	int myret;
	
	ret = strcmp(cp1, cp2);
	myret = ft_strcmp(cp1, cp2);

	if (ret < 0) printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür\n");
	else if (ret > 0) printf("cp2 karakter dizisi cp1 karakter dizsinden küçüktür\n");
	else printf("cp1 cp2 eşittir\n");

	if (myret < 0) printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür");
	else if (myret > 0) printf("cp2 karakter dizisi cp1 karakter dizsinden küçüktür");
	else printf("cp1 cp2 eşittir");
}
