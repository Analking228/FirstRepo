CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
SOURCE = ./sources/*.c
HEADER = ./sources/libft.h

all: libft

libft:
	$(CC) $(CFLAGS) $(HEADER) $(SOURCE)
	ar rc libft.a *.o
	ranlib libft.a

clean:
	rm -f *.o

fclean:
	rm -f *.o
	rm -f libft.a

re: fclean all
