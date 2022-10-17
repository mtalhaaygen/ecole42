
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:53:52 by maygen            #+#    #+#             */
/*   Updated: 2022/10/16 13:53:52 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    int i;
    size_t j;

    if(!s)
        return NULL;
    ptr = (char *)malloc(sizeof(char) * (len + 1));
    if (!ptr)
		return (NULL);
    i= 0;
    j = 0;
    while(s[i])
    {
        if(i >= start  && j < len)
        {
            ptr[j]= s[i];
            j++;
        }
        i++;
    }
    ptr[j] = '\0';
    return (ptr);
}
/*int main()
{
    char str[] = "i just want this part #############";
	size_t size = 20;

	char *ret = ft_substr(str, 5, size);
    printf("%s",ret);
	str[size + 5] = 0;
	if (!memcmp(ret, str + 5, size + 1))
	{
		free(ret);
		printf("başarılı");
	}
	free(ret);
	printf("fail");
}*/