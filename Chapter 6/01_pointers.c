#include <stdio.h>
 int main() {
int i = 45 ;
int* j = &i ;
printf("the address of i is %p\n",&i);
printf("the address of i is %p\n",&j);
printf("the value at i is %p\n",*(&i));
return 0;
}