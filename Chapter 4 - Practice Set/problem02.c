// program to print natural numbers up to a given number :

#include <stdio.h>
 int main() {
  int a , i = 1 ;
  printf("Enter a number to print natural numbers up to that number: ");
  scanf("%d",&a);
  do
  {
    printf("%d\n",i);
    i++;
  } while (i<=a);
  

  return 0;
}