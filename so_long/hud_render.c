/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hud_render.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:31:28 by ooksuz            #+#    #+#             */
/*   Updated: 2023/04/06 12:30:30 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		c = (nb + 48);
		write(1, &c, 1);
	}
}

void	move_count(int num)
{
	write(1, "move = ", 7);
	ft_putnbr(num);
	write(1, "\n", 1);
}

void	render_move_count(t_game *game)
{
	char	*move;

	move = ft_itoa(game->move);
	mlx_string_put(game->mlx, game->window, 0, 16, game->color << 16,
		"Move = ");
	mlx_string_put(game->mlx, game->window, 50, 16, game->color << 16, move);
	free (move);
}	

void	render_coin_count(t_game *game)
{
	char	*move;

	move = ft_itoa(game->move);
	mlx_string_put(game->mlx, game->window, 0, 30, game->color << 16,
		"Coin = ");
	mlx_string_put(game->mlx, game->window, 50, 30, game->color << 16, move);
	free (move);
}

void	hud_render(t_game *game)
{
	render_cordinate(game, 0, 0);
	render_cordinate(game, 0, 1);
	render_move_count(game);
	render_coin_count(game);
	game->color += game->delta;
	if (game->color == 255)
		game->delta = -1;
	if (game->color == 0)
		game->delta = 1;
}
