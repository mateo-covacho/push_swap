#include "push_swap.h"

/* char *parse_nums(char* argv[], t_stack *stack_a) */
/* { */
/*   char *args_string = join_args(argv); */
/**/
/*   return args_string; */
/* } */


char *parse_nums(char* argv[])
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
