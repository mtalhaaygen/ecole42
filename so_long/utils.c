/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:16:56 by maygen            #+#    #+#             */
/*   Updated: 2023/04/06 08:57:05 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] == 0 && s2[i] == 0)
		return (1);
	return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strrchr(char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (str[i] != c && i > 0)
		i--;
	if (i == 0)
		return (ft_strlen(str) - 1);
	return (i);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	size_t			j;

	if (!s)
		return (NULL);
	if ((int)start > ft_strlen(s))
		return (ft_strdup(""));
	if ((int)len > ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ptr[j++] = s[i];
		}
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		len;
	int		i;
	char	*rt;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = 0;
	}
	len = ft_strlen(s1) + ft_strlen(s2);
	rt = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s1[i])
	{
		rt[i] = s1[i];
		i++;
	}
	while (*s2)
		rt[i++] = *s2++;
	rt[i] = 0;
	free(s1);
	return (rt);
}