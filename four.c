#include <stdio.h>
#include <ctype.h>
#include <string.h>


int isConstant(char *str)
{
  int i;
  for (i = 0; i < strlen(str); i++)
    if (!isdigit(str[i]))
      return 0;
  return 1;
}

int main()
{
  char str[50];
  printf("Enter a string: ");
  scanf("%s", str);

  if (isConstant(str))
    printf("The string is a constant.\n");
  else
    printf("The string is not a constant.\n");

  return 0;
}
