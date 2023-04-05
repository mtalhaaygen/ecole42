# include "./mlx/mlx.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	finish(int code)
{
    (void)code;
	write(1, "Exit Game\n", 10);
	exit(1);
}
int	physics_engine(int key)
{
	if (key == 53)
		finish(1);
	return (1);
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	void	*img;
	char	*relative_path = "../W1.xpm";
	int		img_width = 64;
	int		img_height = 64;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1024, 1024, "Hello world!");
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
    if (img == NULL)
    {
        printf("görüntü okuma başarısız\n");
    }

	mlx_put_image_to_window(mlx, mlx_win,
		img,  img_width, img_width);
    mlx_hook(mlx_win, 2, 0, physics_engine, NULL);
	mlx_hook(mlx_win, 17, 0, finish, NULL);
    mlx_loop(mlx);
}