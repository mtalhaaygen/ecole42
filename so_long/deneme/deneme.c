# include "./mlx/mlx.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
typedef struct data
{
	void	*mlx;
	void	*mlx_win;
	void	*img1;
	void	*img2;
	int		img_width;
	int		img_height;
}	t_data;

int	finish(int code)
{
    (void)code;
	write(1, "Exit Game\n", 10);
	exit(1);
}
int	physics_engine(int key, t_data *game)
{
	if (key == 0) // a
	{
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->img2, game->img_width  - 64, game->img_height);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width, game->img_height);
		game->img_width -= 64;
	}
	if (key == 1)
	{
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->img2, game->img_width, game->img_height + 64);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width, game->img_height);
		game->img_height += 64;
	}
	if (key == 2)
	{
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->img2, game->img_width + 64, game->img_height);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width, game->img_height);
		game->img_width += 64;
	}
	if (key == 13)
	{
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->img2, game->img_width, game->img_height - 64);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width, game->img_height);
		game->img_height -= 64;
	}
	if (key == 53)
		finish(1);
	return (1);
}

int	main(void)
{
	t_data *game;

	game = (t_data *)malloc(sizeof(t_data));
	char	*relative_path = "../img/backgroung.xpm";
	char	*relative_path2 = "../img/K.xpm";

	game->mlx = mlx_init();
	game->mlx_win = mlx_new_window(game->mlx, 1024, 1024, "Hello world!");
	game->img_height = 64;
	game->img_width = 64;
	game->img1 = mlx_xpm_file_to_image(game->mlx, relative_path, &game->img_width, &game->img_height);
	game->img2 = mlx_xpm_file_to_image(game->mlx, relative_path2, &game->img_width, &game->img_height);
	// int i = 0;
	// while (i < 16)
	// {
	// 	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width * i, game->img_height);
	// 	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width * (10 + i), game->img_height * i);
	// 	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width * (3 + i), game->img_height * i);
	// 	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width * (3 + i), game->img_height * (i + 1));
	// 	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width * 6, game->img_height * i);
	// 	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width * 7, game->img_height * i);
	// 	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width * (i), game->img_height * 10);
	// 	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width * (i), game->img_height * 9);
	// 	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img1, game->img_width * (i), game->img_height * 8);
	// 	i++;
	// }

	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img2, game->img_width, game->img_height);

    mlx_hook(game->mlx_win, 2, 0, physics_engine, game);
	mlx_hook(game->mlx_win, 17, 0, finish, NULL);
    mlx_loop(game->mlx);
}