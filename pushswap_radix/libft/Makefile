SRCS			=	ft_isdigit.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_atoi.c \
			ft_split.c \
			ft_substr.c \
			ft_strdup.c \
			ft_strlen.c \
			ft_memcpy.c \
			ft_strjoin.c \

OBJS			= $(SRCS:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror -g
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean all

.PHONY: all clean fclean re
