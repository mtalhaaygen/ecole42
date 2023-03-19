/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:08:36 by maygen            #+#    #+#             */
/*   Updated: 2023/03/20 00:21:57 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tofill(int gc, char **gv, t_mystack *mystacks)
{
	int		i;
	char	*c;
	char	**argumans;

	c = merget(gc, gv);
	mystacks->asize = ft_word_count(c, ' ');
	argumans = ft_split(merget(gc, gv), ' ');
	mystacks->a = ft_calloc((mystacks->asize), sizeof(int));
	mystacks->b = ft_calloc((mystacks->asize), sizeof(int));
	mystacks->bsize = 0;
	i = 0;
	while (i <= mystacks->asize - 1)
	{
		mystacks->a[i] = ft_atoi(argumans[i]);
		i++;
	}
	// printf("c:%p -- argumans:%p", c, *argumans);
}

int	isnumber(int gc, char **gv)
{
	int		i;
	char	*str;

	i = 0;
	str = merget(gc, gv);
	while (i < ft_strlen(str))
	{
		if (!ft_isdigit(str[i]))
		{
			if ((str[i] != '-' && str[i] != '+' && str[i] != ' ') || \
			((str[i] == '-' || str[i] == '+' ) && (str[i + 1] == ' ' || \
			str[i + 1] == '+' || str[i + 1] == '-' )))
				return (0);
		}	
		i++;
	}
	free(str);
	return (1);
}

int	doublecheck(int gc, char **gv)
{
	int		i;
	int		j;
	int		size;
	int		number;
	char	**str;

	i = 0;
	size = ft_word_count(merget(gc, gv), ' ');
	str = ft_split(merget(gc, gv), ' ');
	while (i < size)
	{
		j = i + 1;
		number = ft_atoi(str[i]);
		while (j < size)
		{
			if (number == ft_atoi(str[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	select_sort(t_mystack *data, int size)
{
	if (size == 2)
		swap_a(data);
	else if (size == 3)
		sort_three(data);
	else if (size == 4)
		sort_four(data);
	else if (size == 5)
		sort_five(data);
	else
		mradix(data);
}

int	main(int gc, char **gv)
{
	int			i;
	t_mystack	data;

	if (gc == 1)
		return (0);
	if (gc > 1)
	{
		// 
		if (!isnumber(gc, gv) || !doublecheck(gc, gv))
		{
			ft_error();
			return (0);
		}
		tofill(gc, gv, &data);
		indexing(&data);
		if (!ft_issorted(data.a, data.asize))
			select_sort(&data, data.asize);
	}
	// free(data.a);
	// free(data.b);
	i = 0;
	while (i < data.asize)
	{
		printf("%d ", data.a[i]);
		i++;
	}
	system("leaks push_swap");
	return (0);
}
