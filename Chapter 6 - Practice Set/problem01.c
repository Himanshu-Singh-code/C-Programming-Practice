// print the address of a variable 
// using that address find the value 

#include <stdio.h>
 int main() {
int i = 7 ;
int * j = &i ;

printf("Address of i is %p\n",&i);
printf("value of i is %p\n",*j);

  return 0;
}