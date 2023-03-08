SRCS	=	ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c	\
		ft_bzero.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c	\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strlcpy.c	\
		ft_memset.c	\
		ft_memcpy.c	\
		ft_strlcat.c	\

OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
LIBC	= ar rc
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

${LIBC}: ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
