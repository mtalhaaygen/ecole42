/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:08:15 by maygen            #+#    #+#             */
/*   Updated: 2023/03/04 12:28:20 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error()
{
	write(1, "Error\n", 5);
}

void	tofill(int gc, char **gv, t_mystack *mystacks)
{
	int			i;

	i = 1;
	mystacks->asize = gc - 1;
	mystacks->a = ft_calloc((mystacks->asize) ,sizeof(int));
	mystacks->b = ft_calloc((mystacks->asize) ,sizeof(int));
	mystacks->bsize = 0;
	while (i < gc)
	{
		// burada girilen değerlerle a stack i dolduruyorum
		mystacks->a[i - 1] = ft_atoi(gv[i]);
		i++;
	}
}

int	isnumber(int gc, char **gv)
{
	int i;

	gc--;
	while (gc > 1)
	{
		i = 0;
		while (gv[gc][i] != '\0')
		{
			if (!ft_isdigit(gv[gc][i]))
			{
				if (gv[gc][i] != '-' && gv[gc][i] != '+')
					return 0;
			}	
			i++;
		}
		gc--;
	}
	return 1;
}

int	doublecheck(int gc, char **gv)
{
	int i;
	int j;
	int number;

	i = 1;
	while (i < gc - 1)
	{
		j = i + 1;
		number = ft_atoi(gv[i]);
		while (j < gc)
		{
			if (number == ft_atoi(gv[j]))
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

int main(int gc, char **gv)
{
	if (gc == 1)
		return (0);
	if (gc > 1)
	{
		int i;
		int median;
		t_mystack	data;
		
		if (!isnumber(gc, gv) || !doublecheck(gc, gv))
		{
			ft_error();
			return (0);
		}
		// if ("gecerli sayi araliğinda değilse hata mesajı bas")
		// 	;
		tofill(gc, gv, &data);
		indexing(&data);
		median = get_median(data.asize);
		
		i = 0;
		while (i < data.asize)
		{
			printf("%d ", data.a[i]);
			i++;
		}
	}
	return (0);
}