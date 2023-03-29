/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:19:39 by maygen            #+#    #+#             */
/*   Updated: 2023/03/29 14:52:03 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	error_code(int code)
{
	if (code == -1)
		write(2, "Error invalid extension\n", 25);
	else if (code == -2)
		write(2, "Error map is not rectangular\n", 30);
	else if (code == -3)
		write(2, "Error invalid component\n", 25);
	else if (code == -4)
		write(2, "Error invalid component count\n", 31);
	else if (code == -5)
		write(2, "Error invalid wall design\n", 27);
	else if (code == -6)
		write(2, "Error unreachable component exist\n", 35);
	else if (code == -42)
		write(2, "Error invalid arguman count\n", 29);
	else if (code == -404)
		write(2, "Error file did not found\n", 26);
	else if (code == -500)
		write(2, "Error Malloc\n", 14);
	else
		write(1, "Exit Game\n", 10);
	exit(1);
}

t_map map_init(char *src)
{
	t_map	*rt_map;
	int		i;

	rt_map = (t_map *)malloc(sizeof(t_map));
	if (!rt_map)
		error_code(-500);
    if (ft_strcmp(src + ft_strrchr(src, '.') + 1, "ber") == 0)
		error_code(-1);
}

int	main(int ac, char **av)
{
	t_game	*game;

	game = (t_game *)malloc(sizeof(t_game));
	if (!game)
		error_code(-500);
	if (ac != 2)
		return (error_code(-42));
	else
	{
		map_init(av[1]);
	}
	return (0);
}