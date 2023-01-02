/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:22:17 by maygen            #+#    #+#             */
/*   Updated: 2022/07/31 00:29:25 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] <= '9') && (str[i] >= '0')))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	int a;

	a = ft_str_is_numeric("123*4567");
	printf("%d", a);
	return (0);
}*/
