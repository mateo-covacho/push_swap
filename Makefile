# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = main.c \
	   ft_atoi.c \
	   ft_isdigit.c \
	   ft_lstadd_back.c \
	   ft_lstadd_front.c \
	   ft_lstclear.c \
	   ft_lstnew.c \
	   ft_lstsize.c \
	   ft_putchar_fd.c \
	   ft_putendl_fd.c \
	   ft_putstr_fd.c \
	   ft_split.c \
	   ft_strchr.c \
	   ft_strcmp.c \
	   ft_strdup.c \
	   ft_strjoin.c \
	   ft_strlen.c \
	   ft_strncmp.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strtrim.c \
	   ft_substr.c \
	   ft_swap.c \
	   ft_lstadd_back.c \
	   ft_lstadd_front.c \
	   ft_lstclear.c \
	   ft_lstnew.c \
	   ft_lstsize.c \
	   ft_lstlast.c \
	   ft_lstiter.c \

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
