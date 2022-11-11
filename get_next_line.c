/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:18:50 by maygen            #+#    #+#             */
/*   Updated: 2022/11/11 17:20:34 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
# define BUFFER_SİZE 31
#include "get_next_line.h"

char *get_next_line(int fd)
{
	// int fd;
	int size;
	char *str;

	str = malloc(100 * sizeof(char));
	if (!str)
		return (NULL);
	open("talha.txt", O_RDONLY);
	size = read(3, str, 20);

	return (0);
}

int main()
{
	int fd;
	int size;
	char *str;

	str = malloc(21 * sizeof(char));
	if (!str)
		return (0);
	fd = open("talha.txt", O_RDONLY);
	size = read(fd, str, 999);
	//printf("fd = %d  returned that %d bytes were read\n",fd,size);
	str[size] = '\0';
	printf("%s\n",str);
}