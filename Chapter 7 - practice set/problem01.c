// find the address and value of third element in array
#include <stdio.h>
 int main() {
 int arr[] = {1,2,3,4,5,6,7,8,9};
 int *ptr = arr ;

 printf("the value at %u is %d", ptr+3 , *ptr+3);
  return 0;
}