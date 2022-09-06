#include <stdio.h>
int main()
{

  char line61[150];
  int op_vowels = 0, op_consonant = 0;

  printf("Enter a line of string: ");
  gets(line61);

  for (int i = 0; line61[i] != '\0'; ++i)
  {

    if (line61[i] == 'a' || line61[i] == 'e' || line61[i] == 'i' || line61[i] == 'o' || line61[i] == 'u')
      ++op_vowels;

    else if ((line61[i] >= 'a' && line61[i] <= 'z'))
      ++op_consonant;
  }
  int m;
  printf("Menu\nEnter your choice :\n1.Number of vowels\n2.Number of consonants\n");
  scanf("%d", &m);
  if (m == 1)
  {
    printf("Number of vowels : %d\n", op_vowels);
  }
  else if (m == 2)
  {
    printf("Number of consonant : %d", op_consonant);
  }
  else
  {
    printf("Invalid choice!");
  }
  return 0;
}