/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:39:32 by maygen            #+#    #+#             */
/*   Updated: 2023/04/05 00:15:36 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define RES 64

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
// # include "./mlx/mlx.h"

enum {
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

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
char	*ft_read(int fd);
void	map_counter(t_map *map);
int		char_counter(t_map *map, char c);
void	is_reachable(t_map *rt_map);
t_map	*map_init(char *src);
int		error_code(int code);

#endif