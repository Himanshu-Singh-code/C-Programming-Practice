/*#include <stdio.h>
 int main() {
  char str[9];
scanf("%s",str);
printf("%s" , str);

  return 0;
}*/

#include <stdio.h>
 int main() {
char str[9];
for (int  i = 0; i < 8; i++)
{
    scanf("%s" , &str[i]);
    fflush(stdin);
}

printf("%s" , str);
  return 0;
}