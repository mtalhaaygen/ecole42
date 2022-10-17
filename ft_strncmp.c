/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:57:57 by maygen            #+#    #+#             */
/*   Updated: 2022/10/17 19:31:16 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while(s1[i] == s2[i] && s1[i] && s2[i] && n != 1)
	{
		i++;
		n--;
	}
	if(s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return 0;
}