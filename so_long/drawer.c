/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 09:39:47 by maygen            #+#    #+#             */
/*   Updated: 2023/04/14 13:53:48 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_exit(t_game *g, int i, int j)
{
	if (*g->coins->coins_c != 0)
		mlx_put_image_to_window(g->mlx, g->window, g->exit_imgs[1],
			j * RES, i * RES);
	else
		mlx_put_image_to_window(g->mlx, g->window, g->exit_imgs[0],
			j * RES, i * RES);
}

void	draw_floor(t_game *g, int i, int j)
{
	mlx_put_image_to_window(g->mlx, g->window, g->floor_img, j * RES, i * RES);
}

void	draw_wall(t_game *g, int i, int j)
{

	mlx_put_image_to_window(g->mlx, g->window,
		g->wall_img, j * RES, i * RES);
}

void	draw_coin(t_game *g, int i, int j)
{
	mlx_put_image_to_window(g->mlx, g->window,
		g->coins->coin_img, j * RES, i * RES);
}

void	draw_player(t_game *g, int i, int j)
{
	mlx_put_image_to_window(g->mlx, g->window,
		g->player->player_img, j * RES, i * RES);
}
