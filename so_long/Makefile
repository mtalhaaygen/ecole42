CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME = so_long

all: $(NAME)

$(NAME): *.o
	$(CC) $(FLAGS) -o $(NAME) *.o

*.o: *.c
	$(CC) $(FLAGS) -c *.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
