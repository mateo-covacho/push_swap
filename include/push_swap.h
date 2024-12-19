# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct s_node
{
	int				value;
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

