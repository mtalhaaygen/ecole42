/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:18:50 by maygen            #+#    #+#             */
/*   Updated: 2022/11/13 17:29:51 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *multiRead(char *st,int fd) // bu fonksiyonda while içerisinde buffersize kadar okuyup st ye join le ekleyeceğiz
{
	char *l;
	int lw;

	l = malloc((BUFFER_SIZE + 1) * sizeof(char));
	while (lw != 0 && !ft_strchr(st, '\n'))
	{
		lw = read(fd , l, BUFFER_SIZE);
		st = ft_strjoin(st, l);
	}

	return (st);
}

char *get_next_line(int fd)
{
	static char	*str;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = multiRead(str,fd);
	//line = liner(str); // bu fonksiyon ile line stringine str nin \n e kadar ki kısmını atacağız
	//str = next(str); // bu fonksiyon ile str değişkeni \n den sonra ki karakteri gösterecek
	return (line);
}