```c
/**
 * vowelcaps.c
 *
 */
 
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

void capitalizeVowels(char* str);
 
int main(int argc, char* argv[])
{
  if (argc != 2)
  {
    printf("usage: ./vowelcaps string\n");
    return 1;
  }
  
  char* str = argv[1];
  
  capitalizeVowels(str);

  printf("I took the liberty of capitalizing all your vowels...\n");
  printf("%s\n", str);

}

void capitalizeVowels(char* str)
{
  int length = strlen(str);
  for (int i = 0; i < length; i++)
  {
    char c = str[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
      str[i] = toupper(c);
    }
  }
}
```
