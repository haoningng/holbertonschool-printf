CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
SRC = $(wildcard *.c)
NAME = printf
RM = rm

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^ -o $(NAME)

$(SRC):
	echo "Make a clone from github"

clean:
	$(RM) -f *~ $(NAME)
