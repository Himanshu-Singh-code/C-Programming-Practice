// sum of first n natural numbers

#include <stdio.h>
 int main() {
  int i = 1;
  int n ;
  printf("enter the total no :");
  scanf("%d",&n);
  int sum = 0;
  while (i<=n)
  {
    sum += i;
    i++;
  }
  printf("Sum of first n natural numbers is: %d\n", sum);
  return 0;
}