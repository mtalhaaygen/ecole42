/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:35:52 by maygen            #+#    #+#             */
/*   Updated: 2022/11/15 01:57:17 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*multiread(char *str, int fd)
{
	char	*l;
	int		lw;

	l = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!l)
		return (NULL);
	lw = 1;
	while (lw != 0 && !(ft_strchr(str, '\n')))
	{
		lw = read(fd, l, BUFFER_SIZE);
		if (lw == -1)
		{
			free(l);
			free(str);
			return (NULL);
		}
		l[lw] = '\0';
		str = ft_strjoin(str, l);
	}
	free(l);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str[fd] = multiread(str[fd], fd);
	if (!str[fd])
		return (NULL);
	line = liner(str[fd]);
	str[fd] = next(str[fd]);
	return (line);
}
