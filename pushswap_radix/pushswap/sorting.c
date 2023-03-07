/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:45:26 by maygen            #+#    #+#             */
/*   Updated: 2023/03/07 00:22:59 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_mystack *data)
{
	int max;
	int med;

	med = (data->a[0] + data->a[1] + data->a[2]) / 3;
	max = med + 1;
	if (data->a[0] == max)
		reverse_a(data);
	if (data->a[0] == med)
		swap_a(data);
	if (data->a[0] == max)
		reverse_a(data);
	if (!ft_issorted(data->a, data->asize))
		swap_a(data);
	if (!ft_issorted(data->a, data->asize))
		reverse_a(data);		
}

void	sort_four(t_mystack *data)
{
	int i;
	int size;

	i = 0;
	size = data->asize;
	while (i < size)
	{
		if (data->a[0] == 0 || data->a[0] == 1)
			push_b(data);
		else
			reverse_a(data);
		i++;
	}
	if (!ft_issorted(data->a, data->asize))
		swap_a(data);
	if (ft_issorted(data->b, data->bsize))
		swap_b(data);
	push_a(data);
	push_a(data);
}

void	sort_five(t_mystack *data)
{
	int i;
	int size;

	i = 0;
	size = data->asize;
	while (i < size)
	{
		if (data->a[0] == 0 || data->a[0] == 1)
			push_b(data);
		else
			reverse_a(data);
		i++;
	}
	if (!ft_issorted(data->a, data->asize))
		sort_three(data);
	if (ft_issorted(data->b, data->bsize))
		swap_b(data);
	push_a(data);
	push_a(data);
}

void	mradix(t_mystack *data)
{
	int i;
	int j;
	int tmpsize;
	int *tmp;
	
    j = 0;
	tmp = ft_calloc(data->asize, sizeof(int));
	while (j < 32)
	{
        if (!(ft_iszero(data, j) && ft_is_one(data, j)))
        {
            j++;
            continue;
        }
		i = 1;
		while (i <= (data->asize))
		{
			tmp[i - 1] = data->a[i - 1];
			i++;
		}
		tmpsize = data->asize;
		i = 0;
		while (i < tmpsize)
		{
			if(tmp[i] & (1 << j))
				reverse_a(data);
			else
				push_b(data);
			i++;
		}
		i = 0;
		tmpsize = data->bsize;
		while(i < tmpsize)
		{
			push_a(data);
			i++;
		}
		j++;
	}
}