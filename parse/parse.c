char *parse_nums(char* argv[])
{
  char *args_string = malloc(100);
  if (!args_string)
    return NULL;
  int i = 1;
  while (argv[i])
  {
    args_string = strcat(args_string, argv[i]);
    i++;
  }
  args_string = strcat(args_string, "\0");
  printf("%s", args_string);
  return args_string;
}
