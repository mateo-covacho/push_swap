NAME = push_swap
CC = cc
# CFLAGS = -Wall -Wextra -Werror -Iinclude -Ilibft
CFLAGS = -Iinclude -Ilibft

SRC = src/push_swap.c \
			parse/parse.c \
			$(wildcard libft/*.c)  

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

