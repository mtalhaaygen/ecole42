/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:18:50 by maygen            #+#    #+#             */
/*   Updated: 2022/11/10 17:52:08 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include <strings.h>

// char *get_next_line(int fd)
// {
// 	// int fd;
// 	int size;
// 	char *str;

// 	str = malloc(100 * sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	open("talha.txt", O_RDONLY);


// 	size = read(3, str, 20);
// }

int main()
{
	int fd;
	int size;
	char *str;

	str = malloc(21 * sizeof(char));
	if (!str)
		return (0);
	fd = open("talha.txt", O_RDONLY);
	size = read(fd, str, 20);
	//printf("fd = %d  returned that %d bytes were read\n",fd,size);
	str[size] = '\0';
	printf("%s\n",str);
}