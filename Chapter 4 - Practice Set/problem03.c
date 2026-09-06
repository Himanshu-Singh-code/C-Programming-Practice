// mathematical table of a number
#include <stdio.h>
 int main() {
  int n ;
  printf("Enter a number to generate its multiplication table: ");
  scanf("%d",&n);

  for ( int i = 1; i < 11; i++)
  {
    printf("%d X %d = %d\n",n,i,n*i);
  }
  

  return 0;
}