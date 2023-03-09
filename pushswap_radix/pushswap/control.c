/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:57:02 by maygen            #+#    #+#             */
/*   Updated: 2023/03/09 16:36:01 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_one(t_mystack *data, int j)
{
	int	i;

	i = 0;
	while (i < data->asize)
	{
		if (((data->a[i] >> j) & 1) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	ft_iszero(t_mystack *data, int j)
{
	int	i;

	i = 0;
	while (i < data->asize)
	{
		if (((data->a[i] >> j) & 1) == 1)
			return (1);
		i++;
	}
	return (0);
}

int	ft_issorted(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (stack[i] > stack[i + 1] && i != size - 1)
			return (0);
		i++;
	}
	return (1);
}
