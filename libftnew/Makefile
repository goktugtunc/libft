source = ft_*.c
flag = -c
NAME = libft.a


all: ${NAME}

${NAME}:
	gcc ${flag} ${source}
	make rar

rar:
	ar rc ${NAME} ft_*.o

clean:
	rm -f ft_*.o

fclean: clean
	rm -f ${NAME}

re: fclean all
