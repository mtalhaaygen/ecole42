/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:14:09 by maygen            #+#    #+#             */
/*   Updated: 2022/07/31 00:21:31 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	int a;

	a = ft_str_is_alpha("talhygen");
	printf("%d", a);
	return (0);
}*/
