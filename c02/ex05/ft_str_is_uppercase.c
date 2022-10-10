/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:33:58 by maygen            #+#    #+#             */
/*   Updated: 2022/07/31 00:35:47 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] <= 'Z') && (str[i] >= 'A')))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	int a;

	a = ft_str_is_uppercase("ASDFGHJGFDSGTHYN");
	printf("%d", a);
	return (0);
}*/
