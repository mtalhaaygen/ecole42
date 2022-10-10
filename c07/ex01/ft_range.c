/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:13:23 by maygen            #+#    #+#             */
/*   Updated: 2022/08/08 15:13:27 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rt;
	int	i;

	i = 0;
	if (max <= min)
		return (NULL);
	rt = malloc(sizeof(int) * (max - min));
	if (rt == NULL)
		return (NULL);
	while (min < max)
	{
		rt[i] = min;
		min++;
		i++;
	}
	return (rt);
}
