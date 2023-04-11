/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 07:39:44 by maygen            #+#    #+#             */
/*   Updated: 2023/04/11 20:20:02 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	**create_matris(int i, int j)
{
	int	**rt;
	int	a;

	rt = (int **)malloc(sizeof(int *) * i);
	if (!rt)
		error_code(-500);
	a = 0;
	while (a < i)
	{
		rt[a] = (int *)malloc(sizeof(int) * j);
		if (!rt[a])
			error_code(-500);
		a++;
	}
	return (rt);
}

int	**get_poses(t_map *map, char c)
{
	int	i;
	int	j;
	int	**rt;
	int	count;

	count = 0;
	rt = create_matris(char_counter(map, c), 2);
	i = -1;
	while (map->map[++i])
	{
		j = -1;
		while (map->map[i][++j])
		{
			if (map->map[i][j] == c)
			{
				rt[count][0] = i;
				rt[count][1] = j;
				count++;
			}	
		}
	}
	return (rt);
}	

void	player_cordinates(t_map *map, t_player *player)
{
	int	i;
	int	j;

	i = -1;
	while (map->map[++i])
	{
		j = -1;
		while (map->map[i][++j])
		{
			if (map->map[i][j] == 'P')
			{
				player->player_i = i;
				player->player_j = j;
			}
		}
	}
}

void	exit_cordinates(t_map *map, t_game *game)
{
	int	i;
	int	j;

	i = -1;
	while (map->map[++i])
	{
		j = -1;
		while (map->map[i][++j])
		{
			if (map->map[i][j] == 'E')
			{
				game->exit_i = i;
				game->exit_j = j;
			}
		}
	}
}

void	init_structs(t_game *game)
{
	t_coins		*coins;
	t_player	*player;

	coins = (t_coins *)malloc(sizeof(t_coins));
	player = (t_player *)malloc(sizeof(t_player));
	if (!coins || !player)
		error_code(-500);
	coins->coins_c = &game->map->coins;
	coins->coin_pos = get_poses(game->map, 'C');
	player_cordinates(game->map, player);
	game->m = game->map->map;
	game->coins = coins;
	game->player = player;
	game->move = 0;
	game->coin = &game->map->coins;
	game->player_i = &game->player->player_i;
	game->player_j = &game->player->player_j;
	exit_cordinates(game->map, game);
}
