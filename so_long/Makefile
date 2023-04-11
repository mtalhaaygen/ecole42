CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
LDFLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit
MLX = mlx/libmlx.a
NAME = so_long
all: $(NAME)

$(NAME): $(MLX) *.o
	$(CC) $(CFLAGS) $(LDFLAGS) $(MLX) -o $(NAME) *.o

*.o: *.c
	$(CC) $(CFLAGS) -c *.c

$(MLX):
	@make all -C mlx/ 

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
	@make clean -C mlx/

re: fclean all

.PHONY: all clean fclean re
