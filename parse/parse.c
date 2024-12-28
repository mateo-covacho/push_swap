#include "../include/push_swap.h"

// 1. joins the arguments into a single string
// - [ ] edge cases / error handling

// 2. parses the arguments into numerical values

// 3. returns a stack with teh numbers which is put into stack_a
//
t_stack *parse(char *argv)
{
  t_stack *parsed_stack_a;
  char *nums_string;

  char *args_string = join_args(argv);

  int nums[]= parse_nums(args_string);
  parsed_stack_a =  malloc(sizeof(t_stack));



  return parsed_stack_a;
}

// parses the numebrs string example " 4 42 -3 5" into an array of numbers
char *parse_nums(char *args_string)
{
  long *return_nums;
  int i = 0;

  while (args_string[i])
  {
    // "3 52 2"
    //  |
    if (!ft_isdigit(args_string[i]) && args_string[i] != ' ' && args_string[i] != '-')
    {
      free(args_string);
      return NULL;
    }
    i++;
  }

  return args_string;
}


char *join_args(char* argv[])
{
  char *args_string = malloc(100);
  if (!args_string)
    return NULL;
  int i = 1;
  while (argv[i])
  {
    if (i != 1)
      args_string = ft_strjoin(args_string, " ");
    args_string = ft_strjoin(args_string, argv[i]);
    i++;
  }
  args_string = ft_strjoin(args_string, "\0");
  return args_string;
}
