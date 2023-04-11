/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 07:45:22 by maygen            #+#    #+#             */
/*   Updated: 2023/04/11 20:20:40 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_imgs(t_game *g, int *r, void *mlx)
{
	g->player->player_img = mlx_xpm_file_to_image(mlx, PLAYER_SRC, r, r);
	g->coins->coin_img = mlx_xpm_file_to_image(mlx, COIN_SRC, r, r);
	g->exit_imgs[0] = mlx_xpm_file_to_image(mlx, EXITA_SRC, r, r);
	g->exit_imgs[1] = mlx_xpm_file_to_image(mlx, EXITDA_SRC, r, r);
	g->wall_img = mlx_xpm_file_to_image(mlx, WALL_SRC, r, r);
	g->floor_img = mlx_xpm_file_to_image(mlx, FLOOR_SRC, r, r);
}

void	init_images(t_game *game)
{
	game->mlx = mlx_init();
	if (!game->mlx)
		error_code(-500);
	game->window = mlx_new_window(game->mlx, (RES * game->map->row_len),
			(RES * game->map->row_num), "So_long");
	game->exit_imgs = (void **)malloc(sizeof(void *) * 2);
	if (!game->window || !game->exit_imgs)
		error_code(-500);
	game->res = RES;
	init_imgs(game, &game->res, game->mlx);
}
