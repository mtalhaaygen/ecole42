/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:08:36 by maygen            #+#    #+#             */
/*   Updated: 2023/03/21 01:23:31 by maygen           ###   ########.fr       */
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
	argumans = ft_split(c, ' ');
	mystacks->a = ft_calloc((mystacks->asize), sizeof(int));
	mystacks->b = ft_calloc((mystacks->asize), sizeof(int));
	mystacks->bsize = 0;
	i = 0;
	while (i <= mystacks->asize - 1)
	{
		mystacks->a[i] = ft_atoi(argumans[i]);
		i++;
	}
	i = -1;
	while (++i < mystacks->asize)
		free(argumans[i]);
	free(argumans);
	free(c);
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
	char	**str;
	char	*tmp;

	i = -1;
	tmp = merget(gc, gv);
	size = ft_word_count(tmp, ' ');
	str = ft_split(tmp, ' ');
	free(tmp);
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (0);
		}
	}
	i = -1;
	while (++i < size)
		free(str[i]);
	free(str);
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
		if (!isnumber(gc, gv) || !doublecheck(gc, gv))
		{
			ft_error();
			return (0);
		}
		if (gc == 2)
			if (whitespace(gv[1]))
				return (0);
		tofill(gc, gv, &data);
		indexing(&data);
		if (!ft_issorted(data.a, data.asize))
			select_sort(&data, data.asize);
	}
	free(data.a);
	free(data.b);
	return (0);
}
