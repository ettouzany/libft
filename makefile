objects = main.c ft_strchr.c ft_memset.c ft_atoi.c ft_tolower.c ft_toupper.c ft_isalpha.c ft_strrchr.c ft_isdigit.c \
			ft_isalnum.c ft_isascii.c ft_isprint.c ft_bzero.c ft_strlen.c

run: $(objects)
	gcc -Wall -Werror -Wextra -o program $(objects)
	clear
	./program

clean:
	rm program