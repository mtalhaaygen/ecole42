/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:41:29 by maygen            #+#    #+#             */
/*   Updated: 2022/10/22 10:55:15 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	rtn;

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

static char	**protect(void)
{
	char	**rtn;

	rtn = ft_calloc(1, sizeof(char *));
	rtn[0] = NULL;
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	size_t	word_count;
	size_t	i;
	size_t	j;
	size_t	flag;

	i = 0;
	j = 0;
	if (!s || s[0] == 0)
		return (protect());
	word_count = ft_word_count(s, c);
	rtn = ft_calloc(word_count + 1, sizeof(char *));
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
