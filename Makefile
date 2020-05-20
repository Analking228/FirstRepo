CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
SOURCE = ./sources/*.c
HEADER = ./sources/libft.h
NAME = libft

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(HEADER) $(SOURCE)
	ar rc libft.a *.o
	ranlib libft.a

bonus: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
