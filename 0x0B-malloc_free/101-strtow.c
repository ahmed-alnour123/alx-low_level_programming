/**
* strtow - strtow
* @str: input
* Return: char
*/
#include <stdio.h>
#include <stdlib.h>
char **strtow(char *str)
{
  int num_of_words;
  int word_len;
  int i;
  char last_is_space;
  char *tmp;
  char **result;

  if (str == 0 || *str == '\0')
    return (0);

  num_of_words = 0;
  last_is_space = 1;
  tmp = str; 

  while (*tmp != '\0')
  {
    if (*tmp == ' ')
    {
      last_is_space = 1;
      tmp++;
      continue;
    }
    
    num_of_words += last_is_space;
    last_is_space = 0;
    tmp++;
  }

  result = malloc(num_of_words * sizeof(char *));
  if (result == 0)
    return (0);

  word_len = 0;
  i = 0;
  last_is_space = 1;
  while (*tmp != '\0')
  {
    if (*tmp == ' ')
    {
      last_is_space = 1;
      tmp++;
      i++;
      // malloc word_len;
      continue;
    }
    
    num_of_words += last_is_space;
    last_is_space = 0;
    tmp++;
  }
  return (result);
}
