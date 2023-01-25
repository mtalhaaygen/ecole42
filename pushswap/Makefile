CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME = push_swap
NAMELIB = ../libft/libft.a

all: $(NAME)

$(NAME): *.o $(NAMELIB)
	$(CC) $(FLAGS) -o $(NAME) *.o $(NAMELIB)

*.o: *.c
	$(CC) $(FLAGS) -c *.c

$(NAMELIB): 
	@make -C ../libft

clean:
	rm -f *.o
	@make clean -C ../libft

fclean: clean
	rm -f $(NAME)
	@make fclean -C ../libft

re: fclean all

.PHONY: all clean fclean re