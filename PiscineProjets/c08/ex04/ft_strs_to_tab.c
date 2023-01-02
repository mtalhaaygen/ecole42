/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:57:43 by maygen            #+#    #+#             */
/*   Updated: 2022/08/10 15:37:42 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*rt;
	int		i;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	i++;
	rt = malloc(sizeof(char) * i);
	if (rt == NULL)
		return (NULL);
	i = 0;
	while (src[i] != 0)
	{
		rt[i] = src[i];
		i++;
	}
	rt[i] = 0;
	return (rt);
}

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!array)
		return (0);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_str_length(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i] = (struct s_stock_str){0, 0, 0};
	return (array);
}
