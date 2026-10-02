// program to create a array using dynamic memory allocation : 

#include <stdio.h>
#include <stdlib.h>
 int main() {
int n = 6;
int *ptr ;
ptr = (int*)malloc(n*sizeof(int));
ptr[0] = 10;
printf("%d" , ptr[0]);
  return 0;
}