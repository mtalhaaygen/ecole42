//
//***********************************
//                                  *
//         bu kod daha tamamlanmadı *
//                                  *
//***********************************
//
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

int	word_count(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			count++;
			i++;
		}
		i++;
	}
	return (count + 1);
}

char	*ft_substr(char *str, int starti, size_t len)
{
	char *str2;
	int i;

	i = 0;
	str2 = malloc(sizeof(char) * (len + 1));
	if (!str2)
		return (0);
	while(str[starti] && len > 0)
	{
		str2[i] = str[starti];
		i++;
		len--;
		starti++;
	}
	str2[i] = 0;
	return (str2);
}

char	**ft_split(char *str)
{
	char **split;
	int i;
	int j;
	int count;

	count = word_count(str);
	split = malloc(sizeof(char*) * (count + 1));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			split[j] = ft_substr(str, 0, i);
			str = ft_substr(str, (i + 1), ft_strlen(str));
			j++;
			i = 0;
		}
		i++;
	}
	split[j] = ft_substr(str, 0, ft_strlen(str));
	j++;
	split[j] = 0;
	return (split);
}

int main()
{
	char str[] = "talha aygen 42 istanbulda bol bol pushluyor";
	char **new = ft_split(str);
	printf("%s\n", new[0]);
	printf("%s\n", new[1]);
	printf("%s\n", new[2]);
	printf("%s\n", new[3]);
	printf("%s\n", new[4]);
	printf("%s\n", new[5]);
	printf("%s\n", new[6]);
	printf("%s\n", new[7]); // null olmasını bekliyorum
	//printf("%s\n", new[8]); // ram da herhangi bir yer
}
