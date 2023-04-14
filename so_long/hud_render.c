/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hud_render.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:31:28 by ooksuz            #+#    #+#             */
/*   Updated: 2023/04/14 15:31:40 by maygen           ###   ########.fr       */
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
	mlx_string_put(game->mlx, game->window, 0, 16, 0x003090,
		"Move = ");
	mlx_string_put(game->mlx, game->window, 50, 16, 0x003090, move);
	free (move);
}

void	render_coin_count(t_game *game)
{
	char	*co;

	co = ft_itoa(game->coin - *game->coins->coins_c);
	mlx_string_put(game->mlx, game->window, 0, 30, 0x003090,
		"Score = ");
	mlx_string_put(game->mlx, game->window, 50, 30, 0x003090, co);
	free (co);
}

void	hud_render(t_game *game)
{
	render_cordinate(game, 0, 0);
	render_cordinate(game, 0, 1);
	render_move_count(game);
	render_coin_count(game);
}
