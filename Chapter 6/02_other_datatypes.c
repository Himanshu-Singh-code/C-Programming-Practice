#include <stdio.h>
 int main() {
 char i = 'A';
char* j = &i ; // j is a pointer pointing to charcter :

float k = 2.333 ;
float* k1 = &k;

printf("the address of i is : %p\n",i);
printf("the address of i is : %p\n",j);
printf("the value at  j is : %p\n",*(&i));
printf("the value at  k is : %p\n",*(&k1));

  return 0;
}