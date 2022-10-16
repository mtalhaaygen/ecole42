
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:53:08 by maygen            #+#    #+#             */
/*   Updated: 2022/10/16 13:53:08 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
 * fd -> 0 1 2
 * fopen(file) file-> fd=3
 * 
int main()
{
	char str[99] = " aygen";
	int i = 0;
	FILE *fptr;	
	FILE *fptr2;
	fptr = fopen("/Users/maygen/desktop/talha.txt","w");
	fptr2 = fopen("/Users/maygen/desktop/afgh.txt","w");
	while(str[i])
	{
		ft_putchar_fd(str[i], 4);
		i++;
	}
	fclose(fptr);
	fclose(fptr2);
}*/
