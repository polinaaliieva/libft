NAME = libft.a

SRC = ft_memset.c

HEAD = libft.h

OBS = ${SRC:.c=.o}

CC = cc

FLAGS = -Wall -Wextra -Werror -g

all: ${NAME}
	@ranlib ${NAME}

$(NAME): ${OBS}
	ar -rcs ${NAME} ${OBS}

${OBS}: ${SRC}
	${CC} ${FLAGS} -c ${SRC}

clean:
	rm -f ${OBS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
