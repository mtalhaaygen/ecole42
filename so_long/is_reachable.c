/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_reachable.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:36:14 by maygen            #+#    #+#             */
/*   Updated: 2023/04/04 18:53:08 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_moveable(t_map *map, int i, int j)
{
	int	coin;

	coin = char_counter(map, 'C');
	if (map->map[i][j] == '0' || map->map[i][j] == 'C' || map->map[i][j] == 'X')
		return (1);
	if (map->map[i][j] == 'E' && coin == 0)
		return (1);
	return (0);
}

void	fill_reachable(t_map *map, int i, int j)
{
	if (is_moveable(map, i - 1, j))
		map->map[i - 1][j] = 'P';
	if (is_moveable(map, i + 1, j))
		map->map[i + 1][j] = 'P';
	if (is_moveable(map, i, j - 1))
		map->map[i][j - 1] = 'P';
	if (is_moveable(map, i, j + 1))
		map->map[i][j + 1] = 'P';
}

void	is_reached_everywhere(t_map *rt_map)
{
	int	i;
	int	j;

	i = 0;
	while (rt_map->map[i])
	{
		j = 0;
		while (rt_map->map[i][j])
		{
			if (rt_map->map[i][j] == 'E'
				|| rt_map->map[i][j] == 'C')
				error_code(-6);
			j++;
		}
		i++;
	}
}

void	is_reachable(t_map *rt_map)
{
	int	i;
	int	j;
	int	tmp;

	while (1)
	{
		tmp = char_counter(rt_map, 'P');
		i = -1;
		while (rt_map->map[++i])
		{
			j = -1;
			while (rt_map->map[i][++j])
			{
				if (rt_map->map[i][j] == 'P')
					fill_reachable(rt_map, i, j);
			}
		}
		if (tmp == char_counter(rt_map, 'P'))
			break ;
	}
	is_reached_everywhere(rt_map);
}
