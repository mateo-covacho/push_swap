#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
# endif

#include "libft.h"

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_node
{
	int				value;
	long			index;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
	int				size;
}					t_stack;

int main(int argc, char *argv[]);
int push_swap(int argc, char *argv[]);
char *parse_nums(char* argv[]);
char *join_args(char* argv[]);

