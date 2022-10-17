/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:48:41 by maygen            #+#    #+#             */
/*   Updated: 2022/10/17 20:24:43 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if(c == '\0')
		return (s + ft_strlen(s));
	while(s[i] && c != '\0')
	{
		if (s[i] == (char) c)
			return (char *)(s + i);
		i++;
	}
	return NULL;
}

/*int main()
{
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *d1 = strchr(src, '\0');
	char *d2 = ft_strchr(src, '\0');

	if (d1 == d2)
	{
		printf("başarılı");
	}
	else
	{
		printf("orjinali : %s\n",d1);
		printf("benimki : %s\n",d2);
	}
}*/
