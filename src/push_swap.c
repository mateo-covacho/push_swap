#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  t_stack *stack_a;
  t_stack *stack_b;

  char* nums_string = parse_nums(argv, stack_a);
  
  printf("nums_string: \"%s\" \n" , nums_string);

  print_stacks(stack_a, stack_b);
  return 0;
}

/* int push_swap() */
/* { */
/*    */
/*   return EXIT_SUCCESS; */
/* } */
