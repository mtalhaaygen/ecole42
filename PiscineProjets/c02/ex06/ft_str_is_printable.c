/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:44:10 by maygen            #+#    #+#             */
/*   Updated: 2022/07/31 00:54:44 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] <= '~') && (str[i] >= 32)))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	int a;

	a = ft_str_is_printable("ASDs\ndfg");
	printf("%d", a);
	return (0);
}*/
