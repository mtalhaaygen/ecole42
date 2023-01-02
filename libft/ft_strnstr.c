/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:03:48 by maygen            #+#    #+#             */
/*   Updated: 2022/10/25 22:12:58 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	flag;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	i = 0;
	if (!needle_len)
		return ((char *)(haystack));
	else if (len == 0 || !haystack[0])
		return (0);
	else if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	while (i < len)
	{
		n = i;
		flag = 0;
		while ((needle[flag] == haystack[n]) && needle[flag] != '\0'
			&& n++ < len)
			flag++;
		if (flag == needle_len)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
