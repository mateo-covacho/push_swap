#include "../include/push_swap.h"

// 1. joins the arguments into a single string
// - [ ] edge cases / error handling

// 2. parses the arguments into numerical values

// 3. returns a stack with teh numbers which is put into stack_a
//
t_stack *parse(char *argv)
{
  t_stack *parsed_stack_a;

  char *args_string = join_args(&argv);

  int *nums= parse_nums(args_string);
  parsed_stack_a =  malloc(sizeof(t_stack));



  return parsed_stack_a;
}

// parses the numebrs string example " 4 42 -3 5" into an array of numbers
int *parse_nums(char *nums_string)
{
  long *return_nums;
  int i = 0;

  while (nums_string[i])
  {
    // "3 52 2"
    //  |
    if (!ft_isdigit(nums_string[i]) && nums_string[i] != ' ' && nums_string[i] != '-')
    {
      free(nums_string);
      return NULL;
    }
    i++;
  }

  return nums_string;
}


char *join_args(char *argv[])
{
  char *args_string;
  char *temp;
  size_t total_len;
  int i;

  total_len = 0;
  i = 1;
  while (argv[i])
  {
    total_len += ft_strlen(argv[i]) + 1;
    i++;
  }
  args_string = ft_calloc(total_len + 1, sizeof(char));
  if (!args_string)
    return (NULL);
  i = 1;
  while (argv[i])
  {
    if (i != 1)
      ft_strlcat(args_string, " ", total_len + 1);
    ft_strlcat(args_string, argv[i], total_len + 1);
    i++;
  }
  return (args_string);
}
