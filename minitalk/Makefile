SRCS			= client.c server.c
OBJS			= $(SRCS:.c=.o)
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -g

NAME		= client
NAMESV		= server

all:	$(NAME) $(NAMESV)

$(NAME):	client.o
$(NAMESV):	server.o

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME) $(NAMESV)

re:				fclean $(NAME)

.PHONY:			all clean fclean re