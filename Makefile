SRCS			= $(wildcard ft_*.c)
OBJS			= $(SRCS:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror -g
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean all

.PHONY: all clean fclean re
