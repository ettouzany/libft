objects = main.c ft_strchr.c ft_isascii.c


run: $(objects)
	gcc -o program $(objects)
	clear
	./program

clean:
	rm program