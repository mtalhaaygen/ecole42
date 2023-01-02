/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:47:07 by maygen            #+#    #+#             */
/*   Updated: 2022/08/10 20:32:43 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
