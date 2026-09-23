#include <stdio.h>
 int main() {
 // char s[] = {'a','b','c','d','\0'};
char s[] = "abcd" ; // same as the upper one :

printf("%c\n", s[0]);
printf("%c\n", s[1]);
printf("%c\n", s[2]);

for (int  i = 0; i < 4; i++)
{
  printf("The value at %d is %c\n", i, s[i]);
}

  return 0;
}