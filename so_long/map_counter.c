/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_counter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:34:49 by maygen            #+#    #+#             */
/*   Updated: 2023/04/14 13:34:04 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	char_counter(t_map *map, char c)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = -1;
	while (map->map[++i])
	{
		j = -1;
		while (map->map[i][++j])
		{
			if (map->map[i][j] == c)
				count++;
		}
	}
	return (count);
}

void	map_counter(t_map *map)
{
	int	i;
	int	j;

	i = -1;
	while (map->map[++i])
	{
		j = -1;
		while (map->map[i][++j])
		{
			if (!(map->map[i][j] == '1' || map->map[i][j] == '0' ||
				map->map[i][j] == 'P' ||
				map->map[i][j] == 'E' ||
				map->map[i][j] == 'C'))
				error_code(-3);
		}
	}
	if (char_counter(map, 'P') != 1)
		error_code(-4);
	if (char_counter(map, 'E') != 1)
		error_code(-4);
	map->coins = char_counter(map, 'C');
	if (map->coins == 0)
		error_code(-4);
}
