/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:39:32 by maygen            #+#    #+#             */
/*   Updated: 2023/03/29 14:52:48 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define RES 64

# include <stdlib.h>
# include <unistd.h>

typedef struct s_map
{
	int		row_len;
	int		row_num;
	int		coins;
	char	**map;
}	t_map;

typedef struct s_coins
{
	int		*coins_c;
	int		**coin_pos;
	int		frame;
	void	*coin_img;
}	t_coins;

typedef struct s_player
{
	int		player_i;
	int		player_j;
	int		frame;
	void	*player_img;
}	t_player;

typedef struct s_game
{
	void		*mlx;
	void		*window;
	void		*wall_img;
	void		*floor_img;
	void		**exit_imgs;
	int			move;
	int			res;
	int			*coin;
	int			*player_i;
	int			*player_j;
	int			exit_i;
	int			exit_j;
	char		**m;
	t_map		*map;
	t_coins		*coins;
	t_player	*player;
}	t_game;

int	ft_strcmp(char *s1, char *s2);
int	ft_strlen(const char *str);
int	ft_strrchr(char *str, int c);

#endif