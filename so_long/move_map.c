/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:29:32 by maygen            #+#    #+#             */
/*   Updated: 2023/04/11 12:37:31 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	try_exit(t_game *game)
{
	if (*game->coin == 0)
	{
		game->move++;
		move_count(game->move);
		write(1, "You Won!\n", 8);
		exit(1);
	}
}

void	to_collect(t_coins *c, int i, int j)
{
	int	num;
	int	*tmp;

	num = 0;
	while (num < *c->coins_c)
	{
		if (c->coin_pos[num][0] == i && c->coin_pos[num][1] == j)
		{
			tmp = c->coin_pos[num];
			c->coin_pos[num] = c->coin_pos[*c->coins_c - 1];
			c->coin_pos[*c->coins_c - 1] = tmp;
		}
		num++;
	}
	*c->coins_c -= 1;
}

void	to_move(t_game *game, int i, int j, int key)
{
	if (key == 0)
	{
		game->map->map[i][j] = '0';
		game->map->map[i][j - 1] = 'P';
		*game->player_j -= 1;
	}
	if (key == 1)
	{
		game->map->map[i][j] = '0';
		game->map->map[i + 1][j] = 'P';
		*game->player_i += 1;
	}
	if (key == 2)
	{
		game->map->map[i][j] = '0';
		game->map->map[i][j + 1] = 'P';
		*game->player_j += 1;
	}
	if (key == 13)
	{
		game->map->map[i][j] = '0';
		game->map->map[i - 1][j] = 'P';
		*game->player_i -= 1;
	}
	move_count(game->move);
}
