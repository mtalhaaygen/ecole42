/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:39:32 by maygen            #+#    #+#             */
/*   Updated: 2023/04/11 12:40:26 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define RES 64

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "mlx/mlx.h"

enum events{
	ON_KEYDOWN = 2,
	ON_DESTROY = 17
};

# define WALL_SRC "img/wall.xpm"
# define FLOOR_SRC "img/backgroung.xpm"
# define EXITA_SRC "img/EA.xpm"
# define EXITDA_SRC "img/EDA.xpm"
# define PLAYER_SRC "img/K.xpm"
# define COIN_SRC "img/PT.xpm"

#include <stdio.h>
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

typedef struct s_map
{
	int		row_len;
	int		row_num;
	int		coins;
	char	**map;
}	t_map;
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
	int			color;
	int			delta;
	char		**m;
	t_map		*map;
	t_coins		*coins;
	t_player	*player;
}	t_game;

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(const char *str);
int		ft_strrchr(char *str, int c);
char    *ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_read(int fd);
void	map_counter(t_map *map);
int		char_counter(t_map *map, char c);
void	is_reachable(t_map *rt_map);
t_map	*map_init(char *src);
void	init_structs(t_game *game);
void	init_images(t_game *game);
void	render_map(t_game *game);
int		error_code(int code);
void	draw_exit(t_game *g, int i, int j);
void	draw_floor(t_game *g, int i, int j);
void	draw_wall(t_game *g, int i, int j);
void	draw_coin(t_game *g, int i, int j);
void	draw_player(t_game *g, int i, int j);
void	render_cordinate(t_game *game, int i, int j);
void	to_left(t_game *game);
void	to_down(t_game *game);
void	to_right(t_game *game);
void	to_up(t_game *game);
void	to_move(t_game *game, int i, int j, int key);
void	to_collect(t_coins *c, int i, int j);
void	try_exit(t_game *game);
void	move_count(int num);
void	render_move(t_game *game, int code);
#endif