#include <stdio.h>
#include <ctype.h>

void countConsonantsAndVowels(const char *str, int *consonants, int *vowels)
{
  *consonants = 0;
  *vowels = 0;

  while (*str != '\0')
  {
    char c = tolower(*str);

    if (isalpha(c))
    {
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
      {
        (*vowels)++;
      }
      else
      {
        (*consonants)++;
      }
    }

    str++;
  }
}

int main()
{
  char inputString[100];
  int consonantCount, vowelCount;

  printf("Enter a string: ");
  scanf("%s", inputString);

  countConsonantsAndVowels(inputString, &consonantCount, &vowelCount);

  printf("Consonants: %d\n", consonantCount);
  printf("Vowels: %d\n", vowelCount);

  return 0;
}
