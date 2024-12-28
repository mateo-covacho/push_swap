#include "../include/push_swap.h"

void print_stacks(t_stack *stack_a, t_stack *stack_b)
{
  printf("Stack A: ");
  print_stack(stack_a);
  printf("\n");
  printf("Stack B: ");
  print_stack(stack_b);
  printf("\n");
}

void print_stack(t_stack *stack)
{
  t_node *current = stack->head;
  while (current)
  {
    printf("%d ", current->value);
    current = current->next;
  }
}

