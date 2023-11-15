NAME = libft.a

SRC = \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putstr_fd.c \
ft_strchr.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c \


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
