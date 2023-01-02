/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:30:10 by maygen            #+#    #+#             */
/*   Updated: 2022/07/31 00:33:02 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] <= 'z') && (str[i] >= 'a')))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	int a;

	a = ft_str_is_lowercase("sdfghjAgfds");
	printf("%d", a);
	return (0);
}*/
