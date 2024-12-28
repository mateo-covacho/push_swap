#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#endif

#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_node {
  int value;
  long index;
  struct s_node *next;
} t_node;

typedef struct s_stack {
  t_node *head;
  int size;
} t_stack;

int main(int argc, char *argv[]);
int push_swap(int argc, char *argv[]);
char *parse_nums(char *args_string);
char *join_args(char *argv[]);
void print_stacks(t_stack *stack_a, t_stack *stack_b);
void print_stack(t_stack *stack);
t_stack *parse(char *argv);
