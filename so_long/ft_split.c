/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:23:15 by maygen            #+#    #+#             */
/*   Updated: 2023/04/04 21:48:45 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static size_t   ft_word_count(char const *s, char c)
{
        size_t  i;
        size_t  rtn;

        i = 0;
        rtn = 0;
        while (s[i])
        {
                if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
                        rtn++;
                i++;
        }
        if (s[0] != c)
                rtn++;
        return (rtn);
}

static char     **protect(void)
{
        char    **rtn;

        rtn = malloc(1 * sizeof(char *));
        rtn[0] = NULL;
        return (rtn);
}

char    **ft_split(char const *s, char c)
{
        char    **rtn;
        size_t  word_count;
        size_t  i;
        size_t  j;
        size_t  flag;

        i = 0;
        j = 0;
        if (!s || s[0] == 0)
                return (protect());
        word_count = ft_word_count(s, c);
        rtn = malloc((word_count + 1) * sizeof(char *));
        if (!rtn)
                return (NULL);
        while (i < word_count)
        {
                while (s[j] == c)
                        j++;
                flag = j;
                while (s[j] != c && s[j])
                        j++;
                rtn[i++] = ft_substr(s, flag, j - flag);
        }
        rtn[i] = NULL;
        return (rtn);
}

char	*ft_read(int fd)
{
	char	*rd;
	int	count;
	char	*rt;

	rt = NULL;
	count = 1;
	rd = (char *)malloc(sizeof(char) * (42 + 1));
	while (count > 0)
	{
		count = read(fd, rd, 42);
		if (count == -1)
		{
			write(2, "Error path is not a file\n", 25);
			exit(1);
		}
		rd[count] = 0;
		rt = ft_strjoin(rt, rd);
	}
        printf("%s\n",rt);
	if (ft_strlen(rt) == 0)
	{
		write(2, "Error empty file\n", 17);
		exit (1);
	}
	free (rd);
	return (rt);
}

char    *ft_strdup(const char *s1)
{
        char    *ptr;

        ptr = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
        if (!ptr)
                return (NULL);
        ft_memcpy(ptr, s1, ft_strlen(s1) + 1);
        return (ptr);
}

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
        size_t  i;

        i = 0;
        if (!dst && !src)
                return (0);
        while (i < n)
        {
                *(char *)(dst + i) = *(char *)(src + i);
                i++;
        }
        return (dst);
}