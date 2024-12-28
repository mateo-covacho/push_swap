#include "../include/push_swap.h"

t_stack *parse(char *argv)
{
  t_stack *parsed_stack_a;
  char *nums_string;

  parsed_stack_a =  malloc(sizeof(t_stack));
  nums_string= parse_nums(&argv, parsed_stack_a);
  if (!nums_string)
  {
    printf("Error\n");
    exit(1);
  }



  return parsed_stack_a;
}

// joins the arguments into a single string ->
// then parses them isong atol 
char *parse_nums(char* argv[], t_stack *stack_a)
{
  char *args_string = join_args(argv);

  if (!args_string)
    return NULL;
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
